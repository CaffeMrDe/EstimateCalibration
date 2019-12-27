#include <Eigen/Dense>
#include <iostream>
#include <yaml-cpp/yaml.h>



int main(){



    //camera to hand
    Eigen::Quaterniond E2C_quaternion(0.47263248924152124,-0.5737374613870901,-0.5252465337998816,0.41419794089984374);
    Eigen::Matrix3d E2C_rotation_matrix;
    E2C_rotation_matrix=E2C_quaternion.matrix();

    //translation
    Eigen::Vector3d E2C_translation(1.485535698608529,-0.18246595974645155,0.6789228245473155);

    //    std::cout<<"*----------------*-*-*-*-*-*-*-*-"<<std::endl;
    //    std::cout<<"E2C:"<<E2C_rotation_matrix<<std::endl;
    //    std::cout<<"E2Czxczxczxc:"<<E2C_translation<<std::endl;
    //    std::cout<<"*----------------*-*-*-*-*-*-*-*-"<<std::endl;

    Eigen::Quaterniond W2E_quaternion1(0.175581399001, 0.684553587523,-0.681988892145,0.188278275763);

    Eigen::Quaterniond W2E_quaternion2(0.319766458961,0.630403675451,-0.624892014459,0.331437155381);

    Eigen::Quaterniond W2E_quaternion3(-0.0237601713919 ,-0.706269866628,0.706619138531,-0.0361624502789);

    Eigen::Quaterniond W2E_quaternion4( -0.0243547470463 ,-0.627336971172,0.704022365204,-0.331975421064);


    Eigen::Quaterniond W2E_quaternion5(0.318726400503,0.709307442399,-0.627688120342, 0.036111734409);

    Eigen::Quaterniond W2E_quaternion6( 0.212304101446 ,0.520704268677,-0.813887628234,0.146222302329);

    Eigen::Quaterniond W2E_quaternion7( 0.131244604596,0.815839760539,-0.517766616965, 0.22158084133);

    Eigen::Quaterniond W2E_quaternion8(0.249314662009,0.661401998546,-0.657175329261,0.261744498008);

    Eigen::Quaterniond W2E_quaternion9(-0.100243196756,-0.699731849972,0.698216650641,-0.113226094191);

    Eigen::Quaterniond W2E_quaternion10(-0.100343338196,-0.659879314988, 0.696945062095,-0.262217628223);


    Eigen::Quaterniond W2E_quaternion11(0.248426921616,0.701329266775,-0.65857175621,0.112714533683);

    Eigen::Quaterniond W2E_quaternion12(-0.194753832763,-0.60584266719,0.752829258431,-0.168147895874);

    Eigen::Quaterniond W2E_quaternion13(0.153723478294,0.75488591382,-0.603189762033,0.206587657706);

    Eigen::Quaterniond W2E_quaternion14( 0.176164798889,0.684433450291,-0.681995625455,0.188145642032);

    Eigen::Quaterniond W2E_quaternion15( 0.175678566428 ,0.684814971093,-0.681839948727,0.187775879663);

    Eigen::Quaterniond W2E_quaternion16(-0.175902558449,-0.684451820253,0.682071671262, -0.188048480307);

    Eigen::Quaterniond W2E_quaternion17(0.175010462445,0.684800250841,-0.681879542253, 0.188308906694);

    Eigen::Quaterniond W2E_quaternion18(0.175583352207,0.684608124236,-0.68175953241,0.188907762216);


    //hand->world quaternion to roatation

    Eigen::Matrix3d W2E_rotation_matrix1;
    Eigen::Matrix3d W2E_rotation_matrix2;
    Eigen::Matrix3d W2E_rotation_matrix3;
    Eigen::Matrix3d W2E_rotation_matrix4;
    Eigen::Matrix3d W2E_rotation_matrix5;
    Eigen::Matrix3d W2E_rotation_matrix6;
    Eigen::Matrix3d W2E_rotation_matrix7;
    Eigen::Matrix3d W2E_rotation_matrix8;
    Eigen::Matrix3d W2E_rotation_matrix9;
    Eigen::Matrix3d W2E_rotation_matrix10;
    Eigen::Matrix3d W2E_rotation_matrix11;
    Eigen::Matrix3d W2E_rotation_matrix12;
    Eigen::Matrix3d W2E_rotation_matrix13;
    Eigen::Matrix3d W2E_rotation_matrix14;
    Eigen::Matrix3d W2E_rotation_matrix15;
    Eigen::Matrix3d W2E_rotation_matrix16;
    Eigen::Matrix3d W2E_rotation_matrix17;
    Eigen::Matrix3d W2E_rotation_matrix18;


    W2E_rotation_matrix1=W2E_quaternion1.matrix();
    W2E_rotation_matrix2=W2E_quaternion2.matrix();
    W2E_rotation_matrix3=W2E_quaternion3.matrix();
    W2E_rotation_matrix4=W2E_quaternion4.matrix();
    W2E_rotation_matrix5=W2E_quaternion5.matrix();
    W2E_rotation_matrix6=W2E_quaternion6.matrix();
    W2E_rotation_matrix7=W2E_quaternion7.matrix();
    W2E_rotation_matrix8=W2E_quaternion8.matrix();
    W2E_rotation_matrix9=W2E_quaternion9.matrix();
    W2E_rotation_matrix10=W2E_quaternion10.matrix();
    W2E_rotation_matrix11=W2E_quaternion11.matrix();
    W2E_rotation_matrix12=W2E_quaternion12.matrix();
    W2E_rotation_matrix13=W2E_quaternion13.matrix();
    W2E_rotation_matrix14=W2E_quaternion14.matrix();
    W2E_rotation_matrix15=W2E_quaternion15.matrix();
    W2E_rotation_matrix16=W2E_quaternion16.matrix();
    W2E_rotation_matrix17=W2E_quaternion17.matrix();
    W2E_rotation_matrix18=W2E_quaternion18.matrix();


    //camera->marker quaternion to roatation
    Eigen::Quaterniond C2O_quaternion1(-0.45203923937,0.534429264579,-0.392032528629,0.596955931143);
    Eigen::Quaterniond C2O_quaternion2(-0.31065633214,0.609529664931,-0.265370567956,0.679370806359);
    Eigen::Quaterniond C2O_quaternion3(0.557537637272,-0.445687867497,0.496793491027,-0.493670269577);
    Eigen::Quaterniond C2O_quaternion4(0.522800066275,-0.653035472434, 0.28910880692,-0.465446946716);
    Eigen::Quaterniond C2O_quaternion5(-0.358566467447,0.389903354917,-0.475415289497,0.702414240146);


    Eigen::Quaterniond C2O_quaternion6(-0.323994813158,0.618351700345,-0.514485767724,0.497968804783);
    Eigen::Quaterniond C2O_quaternion7( 0.558553542522,-0.423320581188 ,0.249869427092,-0.66811892286);
    Eigen::Quaterniond C2O_quaternion8(-0.384645934804,0.575183938303,-0.330510805161,0.641851657027);

    Eigen::Quaterniond C2O_quaternion9(0.511312322478,-0.490730318601,0.451638105458,-0.542002292418);

    Eigen::Quaterniond C2O_quaternion10(-0.491186435945, 0.597234945623,-0.343350964873,0.533063241831);

    Eigen::Quaterniond C2O_quaternion11(-0.408815383777,0.464559260871,-0.437576601447,0.652365996196);

    Eigen::Quaterniond C2O_quaternion12(-0.390257308072,0.580205927079,-0.45735042618,0.549445996757);

    Eigen::Quaterniond C2O_quaternion13( 0.510080447463,-0.48169210942,0.323800554399,-0.634778583295);

    Eigen::Quaterniond C2O_quaternion14(-0.452456417682,0.534128862883,-0.393814445166,0.595734614331);

    Eigen::Quaterniond C2O_quaternion15(-0.452312885045,0.533776286716,-0.394593804465, 0.59564390305);

    Eigen::Quaterniond C2O_quaternion16( -0.45328307546,0.532706778331,-0.393982115211, 0.596268425054);

    Eigen::Quaterniond C2O_quaternion17(-0.452052163339,0.535004030154,-0.393075330735,0.595744335859);

    Eigen::Quaterniond C2O_quaternion18(-0.451835854475,0.535128575679,-0.393008368926, 0.595840742193);


    Eigen::Matrix3d C2O_rotation_matrix1;
    Eigen::Matrix3d C2O_rotation_matrix2;
    Eigen::Matrix3d C2O_rotation_matrix3;
    Eigen::Matrix3d C2O_rotation_matrix4;
    Eigen::Matrix3d C2O_rotation_matrix5;
    Eigen::Matrix3d C2O_rotation_matrix6;
    Eigen::Matrix3d C2O_rotation_matrix7;
    Eigen::Matrix3d C2O_rotation_matrix8;
    Eigen::Matrix3d C2O_rotation_matrix9;
    Eigen::Matrix3d C2O_rotation_matrix10;
    Eigen::Matrix3d C2O_rotation_matrix11;
    Eigen::Matrix3d C2O_rotation_matrix12;
    Eigen::Matrix3d C2O_rotation_matrix13;
    Eigen::Matrix3d C2O_rotation_matrix14;
    Eigen::Matrix3d C2O_rotation_matrix15;
    Eigen::Matrix3d C2O_rotation_matrix16;
    Eigen::Matrix3d C2O_rotation_matrix17;
    Eigen::Matrix3d C2O_rotation_matrix18;

    C2O_rotation_matrix1=C2O_quaternion1.matrix();
    C2O_rotation_matrix2=C2O_quaternion2.matrix();
    C2O_rotation_matrix3=C2O_quaternion3.matrix();
    C2O_rotation_matrix4=C2O_quaternion4.matrix();
    C2O_rotation_matrix5=C2O_quaternion5.matrix();
    C2O_rotation_matrix6=C2O_quaternion6.matrix();
    C2O_rotation_matrix7=C2O_quaternion7.matrix();
    C2O_rotation_matrix8=C2O_quaternion8.matrix();
    C2O_rotation_matrix9=C2O_quaternion9.matrix();
    C2O_rotation_matrix10=C2O_quaternion10.matrix();
    C2O_rotation_matrix11=C2O_quaternion11.matrix();
    C2O_rotation_matrix12=C2O_quaternion12.matrix();
    C2O_rotation_matrix13=C2O_quaternion13.matrix();
    C2O_rotation_matrix14=C2O_quaternion14.matrix();
    C2O_rotation_matrix15=C2O_quaternion15.matrix();
    C2O_rotation_matrix16=C2O_quaternion16.matrix();
    C2O_rotation_matrix17=C2O_quaternion17.matrix();
    C2O_rotation_matrix18=C2O_quaternion18.matrix();





//camera->marker translation
    Eigen::Vector3d C2O_translation1(-0.202527681699, -0.0659288898648,0.708245273871);

    Eigen::Vector3d C2O_translation2(-0.198803251922,-0.0933200946388,0.675836765107);

    Eigen::Vector3d C2O_translation3(-0.206703832205,-0.054910025996,0.747354596062);

    Eigen::Vector3d C2O_translation4(-0.243613870853,-0.0718887073718, 0.702961153078);

    Eigen::Vector3d C2O_translation5(-0.162829294895,-0.0774842646978,0.717150978532);

    Eigen::Vector3d C2O_translation6(-0.209415933509,-0.066386786294,0.704617690612);

    Eigen::Vector3d C2O_translation7(-0.196810798933,-0.0646585918637,0.713458710658);

    Eigen::Vector3d C2O_translation8(-0.200542761903,-0.0778436293731,0.690829334687);

    Eigen::Vector3d C2O_translation9(-0.204453340915,-0.0582884187245,0.726947234334);

    Eigen::Vector3d C2O_translation10(-0.223480477545,-0.0668233549436,0.705343101629);

    Eigen::Vector3d C2O_translation11(-0.182195281379, -0.0696415874118,0.712346709508);

    Eigen::Vector3d C2O_translation12(-0.205779285454, -0.0661663122277,0.705700003468);

    Eigen::Vector3d C2O_translation13(-0.199633341835,-0.0652780851006,0.71084800067);

    Eigen::Vector3d C2O_translation14(-0.196818614418,-0.0550708595074,0.658563163346);

    Eigen::Vector3d C2O_translation15(-0.207989308509,-0.076906295782,0.757842160672);

    Eigen::Vector3d C2O_translation16(-0.101460660742,-0.0676438224202,0.719235491984);

    Eigen::Vector3d C2O_translation17(-0.303119830885,-0.0640160547377,0.696951015365);

    Eigen::Vector3d C2O_translation18(-0.202325138875,-0.0989100805446,0.700640236779);




//hand->world translation
    Eigen::Vector3d W2E_translation1(-0.325520711933,0.939980106544,0.224583939936);

    Eigen::Vector3d W2E_translation2(-0.325782399655,0.946723827854,-0.193879093004);

    Eigen::Vector3d W2E_translation3(-0.324977778759,0.757451859939,0.600500342541);

    Eigen::Vector3d W2E_translation4(-0.389083936284,0.940383485762,0.0656726217219);

    Eigen::Vector3d W2E_translation5(-0.201170684872,0.939762543648,0.340948660501);

    Eigen::Vector3d W2E_translation6(0.102045849816,0.989711727606,0.223744788332);

    Eigen::Vector3d W2E_translation7(-0.691641228711, 0.714868381435,0.224729347201);

    Eigen::Vector3d W2E_translation8(-0.325897414881,0.966114363416,0.0149039404648);

    Eigen::Vector3d W2E_translation9(-0.325967404366,0.869190641753,0.42200632699);

    Eigen::Vector3d W2E_translation10(-0.366579402939,0.940024267174,0.147709705667);

    Eigen::Vector3d W2E_translation11(-0.270170737219,0.939649447532, 0.290073950791);

    Eigen::Vector3d W2E_translation12(-0.113585164893,0.988207906866,0.224654210242);

    Eigen::Vector3d W2E_translation13(-0.522079912633,0.846811209659,0.224204893002);

    Eigen::Vector3d W2E_translation14( -0.324812366986,0.983583757585,0.199400897735);

    Eigen::Vector3d W2E_translation15(-0.325662743676,0.896301834237,0.25026634156);

    Eigen::Vector3d W2E_translation16(-0.224978382052,0.940963296261,0.226306856784);

    Eigen::Vector3d W2E_translation17(-0.426273209395,0.938675129865,0.223301911412);

    Eigen::Vector3d W2E_translation18(-0.326922541643, 0.956614095266,0.252342328417);





//list
    Eigen::Matrix3d W2E_rotationlist[18]={W2E_rotation_matrix1,W2E_rotation_matrix2,W2E_rotation_matrix3,W2E_rotation_matrix4,W2E_rotation_matrix5,W2E_rotation_matrix6,
                                 W2E_rotation_matrix7,W2E_rotation_matrix8,W2E_rotation_matrix9,W2E_rotation_matrix10,W2E_rotation_matrix11,W2E_rotation_matrix12,
                                 W2E_rotation_matrix13,W2E_rotation_matrix14,W2E_rotation_matrix15,
                                 W2E_rotation_matrix16,W2E_rotation_matrix17,W2E_rotation_matrix18
                                 };
    Eigen::Matrix3d C2O_rotationlist[18]={C2O_rotation_matrix1,C2O_rotation_matrix2,C2O_rotation_matrix3,C2O_rotation_matrix4,C2O_rotation_matrix5,C2O_rotation_matrix6,
                                 C2O_rotation_matrix7,C2O_rotation_matrix8,C2O_rotation_matrix9,C2O_rotation_matrix10,C2O_rotation_matrix11,C2O_rotation_matrix12,
                                 C2O_rotation_matrix13,C2O_rotation_matrix14,C2O_rotation_matrix15,C2O_rotation_matrix16,C2O_rotation_matrix17,C2O_rotation_matrix18};

    Eigen::Vector3d W2E_translationlist[18]={W2E_translation1,W2E_translation2,W2E_translation3,W2E_translation4,W2E_translation5,W2E_translation6,
                                            W2E_translation7,W2E_translation8,W2E_translation9,W2E_translation10,W2E_translation11,W2E_translation12,
                                            W2E_translation13,W2E_translation14,W2E_translation15,W2E_translation16,W2E_translation17,W2E_translation18
                                            };
    Eigen::Vector3d C2O_translationlist[18]={C2O_translation1,C2O_translation2,C2O_translation3,C2O_translation4,C2O_translation5,C2O_translation6,
                                            C2O_translation7,C2O_translation8,C2O_translation9,C2O_translation10,C2O_translation11,C2O_translation12,
                                            C2O_translation13,C2O_translation14,C2O_translation15,C2O_translation16,C2O_translation17,C2O_translation18
                                            };

    int rows=4, cols=4;
    Eigen::Matrix4d W2E_list[18]={};
    Eigen::Matrix4d C2O_list[18]={};

    Eigen::Matrix4d C2O_inv_list[18]={};
    Eigen::Matrix4d W2E_inv_list[18]={};

    for (int i=0;i<18;i++){
        Eigen::Matrix4d W2E(rows,cols);
        W2E << ( Eigen::Matrix3d() << W2E_rotationlist[i]).finished(),
              (Eigen::Vector3d() << W2E_translationlist[i]).finished(),
              Eigen::MatrixXd::Zero(rows-3,3),
              Eigen::MatrixXd::Identity(rows-3,cols-3);
        W2E_list[i]<< W2E;

        //inverse W2E
        Eigen::Matrix4d I= Eigen::Matrix4d::Identity(4,4);
        Eigen::Matrix4d W2Einv= W2E.ldlt().solve(I);
        W2E_inv_list[i]<< W2Einv;


        Eigen::Matrix4d C2O(rows,cols);
        C2O << ( Eigen::Matrix3d() << C2O_rotationlist[i]).finished(),
              (Eigen::Vector3d() << C2O_translationlist[i]).finished(),
              Eigen::MatrixXd::Zero(rows-3,3),
              Eigen::MatrixXd::Identity(rows-3,cols-3);
        C2O_list[i]<< C2O;
        //inverse C2O
        Eigen::Matrix4d J= Eigen::Matrix4d::Identity(4,4);
        Eigen::Matrix4d C2Oinv= C2O.ldlt().solve(J);
        C2O_inv_list[i]<< C2Oinv;
     }




    Eigen::Matrix4d E2C(rows,cols);
    E2C << ( Eigen::Matrix3d() << E2C_rotation_matrix).finished(),
          (Eigen::Vector3d() << E2C_translation).finished(),
          Eigen::MatrixXd::Zero(rows-3,3),
          Eigen::MatrixXd::Identity(rows-3,cols-3);
    //inverse E2C
    Eigen::Matrix4d I= Eigen::Matrix4d::Identity(4,4);
    Eigen::Matrix4d E2Cinv= E2C.ldlt().solve(I);


/*********************************************/


    // C2O_list
    // C2O_inv_list
    // E2C
    // W2E_list
    // error compute
    // ObjInBase
    Eigen::Matrix4d ObjInBase[17], ObjInBaseMean;
    Eigen::Vector3d TransObj[17], RotationObj[17];
    for(int i = 0; i < 18; i++)
    {
        Eigen::Matrix4d temp = W2E_list[i]* E2C*C2O_list[i];
        ObjInBase[i] << temp;
//        std::cout << "ObjInBase: "<<std::endl<<temp<<std::endl;
        Eigen::Matrix3d rotation;
        rotation <<temp.block(0,0,3,3);
        Eigen::Vector3d ea1 = rotation.eulerAngles(2,1,0);
        RotationObj[i] << ea1;

        Eigen::Vector4d A_c = temp.col(3);
        TransObj[i] << A_c.head(3);
        std::cout <<"i: "<< i<<std::endl;
        std::cout << "TransObj[i]: "<<std::endl<<TransObj[i]<<std::endl;
        std::cout << "RotationObj[i]: "<<std::endl<<RotationObj[i]*180/3.1415<<std::endl;
//        getwchar();
    }

    Eigen::Vector3d TransObjSum, RotationSum;
    TransObjSum.setZero();
    RotationSum.setZero();
    for(int i= 0; i< 18;i++)
    {
        TransObjSum += TransObj[i];
        RotationSum += RotationObj[i]; //sum eular
    }

    Eigen::Vector3d TransObjMean, RotationMean;
    TransObjMean = TransObjSum/18;
    RotationMean = (RotationSum/18)*3.1415/180 ;

    std::cout << "TransObjMean "<<std::endl<<TransObjMean<<std::endl;
    std::cout << "RotationMean: "<<std::endl<<RotationMean<<std::endl;


    Eigen::AngleAxisd rollAngle(Eigen::AngleAxisd(RotationMean(2),Eigen::Vector3d::UnitX()));
    Eigen::AngleAxisd pitchAngle(Eigen::AngleAxisd(RotationMean(1),Eigen::Vector3d::UnitY()));
    Eigen::AngleAxisd yawAngle(Eigen::AngleAxisd(RotationMean(0),Eigen::Vector3d::UnitZ()));

    Eigen::Matrix3d RotationMeanmatrix;
    RotationMeanmatrix=yawAngle*pitchAngle*rollAngle;
    // merge
    Eigen::Matrix4d  ObjInEndM;
    ObjInEndM << ( Eigen::Matrix3d() << RotationMeanmatrix).finished(),
            (Eigen::Vector3d() << TransObjMean).finished(),
            Eigen::MatrixXd::Zero(1,3),
            Eigen::MatrixXd::Identity(1,1);

    std::cout << "ObjInEndM: "<<std::endl<<ObjInEndM<<std::endl;
    // C2O_list[j]
    Eigen::Matrix4d EstimeObjInCamera[17];
    for(int j = 0;j < 17; j++){
        //A = XB XInv
        Eigen::Matrix4d A = W2E_list[j] *E2C;


        EstimeObjInCamera[j] = ObjInEndM *A.inverse();
        std::cout << "A "<<std::endl<<C2O_list[j]<<std::endl;
        std::cout << "EstimeObjInCamera "<<std::endl<<EstimeObjInCamera[j]<<std::endl;
        std::cout << "C2O "<<std::endl<<C2O_list[j]<<std::endl;

        getwchar();
    }
//    double e =sqrt(ERROR_r/17);
//    std::cout<<e<<std::endl;
//    double et =sqrt(ERROR_t/17);
//    std::cout<<et<<std::endl;
}
