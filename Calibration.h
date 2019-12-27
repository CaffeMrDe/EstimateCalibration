#pragma once
#include <iostream>
#include <opencv2/core/eigen.hpp>
#include <opencv2/core.hpp>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

class EyeCalib2D
{
public:
    EyeCalib2D();

public:
    int writeEyeCalib(int x1,int y1, int rx,int ry,int num);
    int readEyeCalib(int x1,int y1, int rx,int ry,int num);
    int estimaHom2D();
    int readEyeCalibHomParam();
    int getAffineResult();
private:
    int MatriToMatXml(Eigen::MatrixXd& M, cv::Mat &mm);
    int MatToMatri(cv::Mat &mm,Eigen::MatrixXd& M);
    Eigen::MatrixXd pinv(Eigen::MatrixXd  A);
    int readXml(const cv::Mat& M, const std::string & FileName);
    int writeXml(const cv::Mat& M, const std::string & FileName);
private:
    Eigen::MatrixXd A,b;
};