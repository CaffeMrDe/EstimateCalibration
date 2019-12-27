
#include <Calibration.h>
EyeCalib2D::EyeCalib2D(){
    A = MatrixXd(3,9);
    b = MatrixXd(3,9);   
}

int EyeCalib2D::writeEyeCalib(int x,int y, int Rx, int Ry,int num){

    A(0, num) = x;
    A(1, num) = y;
    A(2, num) = 1;

    b(0, num) = Rx;
    b(1, num) = Ry;
    b(2, num) = 1;

}

int EyeCalib2D::readEyeCalib(std::vector<int>& data, int num){
    data.push_back(A(0,num));
    data.push_back(A(1,num));
    data.push_back(A(2,num));

    data.push_back(b(0,num));
    data.push_back(b(1,num));
    data.push_back(b(2,num));
}

int EyeCalib2D::estimaHom2D(){

}

int EyeCalib2D::MatriToMatXml(Eigen::MatrixXd& M, cv::Mat &mm){
    cv::eigen2cv(M,mm);
}

int EyeCalib2D::MatToMatri(cv::Mat &mm,Eigen::MatrixXd& M){
    cv::cv2eigen(mm, M);
}


Eigen::MatrixXd EyeCalib2D::pinv(Eigen::MatrixXd  A)
{
    Eigen::JacobiSVD<Eigen::MatrixXd> svd(A, Eigen::ComputeFullU | Eigen::ComputeFullV);//M=USV*
    double  pinvtoler = 1.e-8; //tolerance
    int row = A.rows();
    int col = A.cols();
    int k = min(row,col);
    Eigen::MatrixXd X = Eigen::MatrixXd::Zero(col,row);
    Eigen::MatrixXd singularValues_inv = svd.singularValues();//奇异值
    Eigen::MatrixXd singularValues_inv_mat = Eigen::MatrixXd::Zero(col, row);
    for (long i = 0; i<k; ++i) {
        if (singularValues_inv(i) > pinvtoler)
            singularValues_inv(i) = 1.0 / singularValues_inv(i);
        else singularValues_inv(i) = 0;
    }
    for (long i = 0; i < k; ++i) 
    {
        singularValues_inv_mat(i, i) = singularValues_inv(i);
    }
    X=(svd.matrixV())*(singularValues_inv_mat)*(svd.matrixU().transpose());//X=VS+U*

    return X;
}

int readXml(const cv::Mat& M, const std::string & FileName,const std::string & node){

}

int writeXMl(const cv::Mat& M, const std::string & FileName, const std::string& node){

}
