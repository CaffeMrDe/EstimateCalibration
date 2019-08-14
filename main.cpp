#include <iostream>

#include <Eigen/Dense>
using namespace std;
 
using namespace Eigen;

Eigen::MatrixXd pinv(Eigen::MatrixXd  A)
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
//  PicX =[1490.168, 1499.325,2422.182, ...
//         2417.885,2404.690, 1479.835,...
//         552.398,560.731,570.021];
// PicY =[1067.822, 451.513,450.673,...
//         1069.607,1685.788, 1683.532,...
//         1680.473,1066.009,450.147];

// RobotX =[205.295, 205.295, 220.295,...
//           220.295, 220.295, 205.295,...
//           190.295, 190.295,190.295];
// RobotY =[133.873, 143.873, 143.873, ...
//           133.873, 123.873, 123.873, ...
//           123.873, 133.873, 143.873];
int main()
{
 
    //对方程Ax=b
    // MatrixXf A = MatrixXf::Random(3, 2);
    MatrixXd  A(3,6);
    A(0,0) = 1490.168;A(1,0) = 1067.822;
    A(0,1) = 1499.325;A(1,1) = 451.513;
    A(0,2) = 2422.182;A(1,2) = 450.673;
    A(0,3) = 2417.885;A(1,3) = 1069.607;
    A(0,4) = 2404.690;A(1,4) = 1685.788;
    A(0,5) = 1479.835;A(1,5) = 1683.532;
    // A(0,3) = 1;A(1,3) = 1;A(2,3) = 1;
    std::cout << "Here is the matrix A:\n" << A << std::endl;
 
    // VectorXf b = VectorXf::Random(3，2);
    MatrixXd  b(3,6);
    b(0,0) = 205.295;b(1,0) = 133.873;
    b(0,1) = 205.295;b(1,1) = 143.873;
    b(0,2) = 220.295;b(1,2) = 143.873;
    b(0,3) = 220.295;b(1,3) = 133.873;
    b(0,4) = 220.295;b(1,4) = 123.873;
    b(0,5) = 205.295;b(1,5) = 123.873;
    // b(0,3) = 2;b(1,3) = 2;b(2,3) = 1;
    std::cout << "Here is the right hand side b:\n" << b << std::endl;

    cout << endl; 
    cout << "******************************" << endl;
 
    MatrixXf x_jacobiSvd, x_colPivHouseholderQr;
 
    //jacobiSvd 方式:Slow (but fast for small matrices)
 
    // x_jacobiSvd = A.jacobiSvd(ComputeThinU | ComputeThinV).solve(b);
 
    // std::cout << "The least-squares solution is:\n"
    //     << A.jacobiSvd(ComputeThinU | ComputeThinV).solve(b) << std::endl;
    std::cout << umeyama(A,b,true)<<std::endl;
    cout << "******************************" << endl;
    A(2,0)=1;A(2,1)=1;A(2,2)=1;A(2,3)=1;A(2,4)=1;A(2,5)=1;
    b(2,0)=1;b(2,1)=1;b(2,2)=1;b(2,3)=1;b(2,4)=1;b(2,5)=1;
    // std::cout <<b*A.inverse()<<std::endl;
    std::cout <<b*pinv(A)<<std::endl;
    cout << "******************************" << endl;
    // std::cout <<A.colPivHouseholderQr().solve(b)<<std::endl;
    cout << endl;
    // cout << "**********colPivHouseholderQr方法********************" << endl;
 
    // x_colPivHouseholderQr = A.colPivHouseholderQr().solve(b);
 
    // //colPivHouseholderQr方法:fast
    // std::cout << "The least-squares solution is:\n"
    //     << x_colPivHouseholderQr << std::endl;
 
 
   
 
    system("pause");
 
    return 0;
 
 
}
