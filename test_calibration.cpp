#include <Eigen/Dense>
#include <iostream>
int main(){

//hand->world quaternion to roatation
    Eigen::Quaterniond W2E_quaternion1(-0.000609572777295,-0.706812298484,-0.707400618737,-0.000606417868064);
    Eigen::Quaterniond W2E_quaternion2(-0.000475396678608,-0.907910111627,-0.419163949582,-0.000765881483283);
    Eigen::Quaterniond W2E_quaternion3(0.220013901114,0.88085431517,0.406494250023,0.102234942466);
    Eigen::Quaterniond W2E_quaternion4(0.21960445216,0.253435167908,0.936430938838,-0.103158116719);
    Eigen::Quaterniond W2E_quaternion5(-0.000717735992666,-0.250261608219,-0.968177984474,-5.18260609112e-05);
    Eigen::Quaterniond W2E_quaternion6(-0.20096254068,-0.677437819773,-0.677787418795,-0.203214843226);
    Eigen::Quaterniond W2E_quaternion7(-0.142384228487, 0.692377211913,0.692146022975,0.145857501633);
    Eigen::Quaterniond W2E_quaternion8(0.121847764922,0.696727123807,0.696516091805,-0.120788124378);
    Eigen::Quaterniond W2E_quaternion9(0.0630276606129 ,-0.197862947703,-0.977692976253,-0.0315311292073);
    Eigen::Quaterniond W2E_quaternion10(-0.00259283834712 ,0.70223751316,0.708155106712,-0.0732945914644);
    Eigen::Quaterniond W2E_quaternion11(-0.134491575925 ,-0.694454486756,-0.69416930363,0.133319014878);
    Eigen::Quaterniond W2E_quaternion12(0.259376146732 ,0.657974904907,0.706949367836,-0.00395352182231);
    Eigen::Quaterniond W2E_quaternion13(0.0240920382407 ,0.625636814754,0.752334534428,0.204916807571);
    Eigen::Quaterniond W2E_quaternion14( -0.246601895119 ,-0.6630119738,-0.662357482155,-0.246749252795);
    Eigen::Quaterniond W2E_quaternion15(-0.0253082296177 ,-0.934719521295,-0.0680527546045,-0.347890403165);
    Eigen::Quaterniond W2E_quaternion16(-0.100361511779 ,0.7456652983,0.593225333387,-0.286346876519);
    Eigen::Quaterniond W2E_quaternion17(0.286036675909 , 0.647144409697,0.646701788771,-0.284892838508);
    Eigen::Quaterniond W2E_quaternion18(0.203522418296 ,-0.676897088203,-0.677176843324,-0.204500562589);
    Eigen::Quaterniond W2E_quaternion19(0.197124167072 ,0.208533520231,0.867038125444,0.407309124281);

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
    Eigen::Matrix3d W2E_rotation_matrix19;

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
    W2E_rotation_matrix19=W2E_quaternion19.matrix();

//camera->marker quaternion to roatation
    Eigen::Quaterniond C2O_quaternion1(1.71756022206e-06,2.09003145886e-06,0.707109700545,-0.707103861811);
    Eigen::Quaterniond C2O_quaternion2(0.239942388795,-0.247861188698,-0.659501535022,0.667869902377);
    Eigen::Quaterniond C2O_quaternion3(0.175731933541,-0.297462908835,-0.484396203527,0.803737782744);
    Eigen::Quaterniond C2O_quaternion4(0.505178930011,-0.178388744145,0.535880175301,-0.65253669809);
    Eigen::Quaterniond C2O_quaternion5(-0.36010705518,0.359194029058,-0.605682672462,0.611924062754);
    Eigen::Quaterniond C2O_quaternion6(0.0034829980867,0.00315946621667,-0.473870987242,0.880581724741);
    Eigen::Quaterniond C2O_quaternion7(0.151055712931,0.153198473768,-0.685669767433,0.695391522276);
    Eigen::Quaterniond C2O_quaternion8(0.15617008135,0.1550503471,0.697537965471,-0.681917210724);
    Eigen::Quaterniond C2O_quaternion9(0.341986118856,-0.438293832695,0.604297475006,-0.570761397111);
    Eigen::Quaterniond C2O_quaternion10(0.0335581945483,0.0228278024589,0.746595432751,-0.664039154575);
    Eigen::Quaterniond C2O_quaternion11(0.156378242434,0.156655135571,0.695953384359,-0.68312070719);
    Eigen::Quaterniond C2O_quaternion12(-0.15376038512,-0.105062933298,-0.554108247299,0.811346765748);
    Eigen::Quaterniond C2O_quaternion13(0.0288806827719,0.156688199263,-0.573250654965,0.803740257146);
    Eigen::Quaterniond C2O_quaternion14(-0.00277934628391,-0.00318795869806,-0.415764973394,0.909462258179);
    Eigen::Quaterniond C2O_quaternion15(0.595085129884,-0.270307911037,-0.314713848195,0.68830408627);
    Eigen::Quaterniond C2O_quaternion16(0.018533772341,0.169249398735,0.864084283401,-0.47367656844);
    Eigen::Quaterniond C2O_quaternion17(0.286562405379,0.285703984862,0.647722959185,-0.645530935743);
    Eigen::Quaterniond C2O_quaternion18(-0.200156298073,-0.200220323617,0.679954385311,-0.676395825126);
    Eigen::Quaterniond C2O_quaternion19(-0.224648932481,0.434243650242,-0.236164504491,0.839756891117);



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
    Eigen::Matrix3d C2O_rotation_matrix19;


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
    C2O_rotation_matrix19=C2O_quaternion19.matrix();

//camera to hand
    Eigen::Quaterniond E2C_quaternion(0.00024533078619406193,0.002357395654351221,-0.00048745651547731816,-0.9999970724380546);
    Eigen::Matrix3d E2C_rotation_matrix;
    E2C_rotation_matrix=E2C_quaternion.matrix();

//translation
    Eigen::Vector3d E2C_translation(-0.009044697114747145, 0.0498091809327741,0.1263144637089167);

//camera->marker
    Eigen::Vector3d C2O_translation1(0.0421052761376,-0.0526315681636,0.972601532936);
    Eigen::Vector3d C2O_translation2(-0.0337581399083,-0.0568963584304,0.967144315243);
    Eigen::Vector3d C2O_translation3(0.0455901548266,0.299751907587,1.03382182121);
    Eigen::Vector3d C2O_translation4(-0.257933940716,0.0514150928193,1.0360394169);
    Eigen::Vector3d C2O_translation5(0.621273772588,-0.317903669077,0.604426861746);
    Eigen::Vector3d C2O_translation6(0.230437326142,0.411264853759,1.12660264638);
    Eigen::Vector3d C2O_translation7(0.42370370388,-0.0476032342613,0.869515931845);
    Eigen::Vector3d C2O_translation8(-0.287013745556,-0.0525475869266,0.926272454361);
    Eigen::Vector3d C2O_translation9(0.616541480113,-0.230905451757,0.59276403142);
    Eigen::Vector3d C2O_translation10(-0.0774179219582, -0.261325941518,0.938932486657);
    Eigen::Vector3d C2O_translation11(-0.198811400778,-0.0526445802323,0.963770295351);
    Eigen::Vector3d C2O_translation12(-0.200235502702,0.300787336342,0.941560446154);
    Eigen::Vector3d C2O_translation13(0.399774164435,0.304412197285,0.867956318865);
    Eigen::Vector3d C2O_translation14(0.0420875123963,0.240072515756,0.801028275013);
    Eigen::Vector3d C2O_translation15(0.193066560939,0.0338504401444,0.799467967669);
    Eigen::Vector3d C2O_translation16(-0.149979863368,0.043886676453,0.471754467951);
    Eigen::Vector3d C2O_translation17(-0.150095483887,-0.00244429102539,0.579968044025);
    Eigen::Vector3d C2O_translation18(0.17055876967,0.0213784819158, 0.61782160153);
    Eigen::Vector3d C2O_translation19(-0.028514495659,0.071808318031,0.587250469932);



//hand->world
    Eigen::Vector3d W2E_translation1(0.631268526593f, -0.312039838784, 0.604524619532);
    Eigen::Vector3d W2E_translation2(  0.638829585107,-0.314761679708, 0.604472467756);
    Eigen::Vector3d W2E_translation3(0.517472883062, -0.108213523044,0.648917241326);
    Eigen::Vector3d W2E_translation4( 0.501104821523,-0.112025935111,0.643609097469);
    Eigen::Vector3d W2E_translation5(0.621273772588,-0.317903669077,0.604426861746);
    Eigen::Vector3d W2E_translation6(0.34217191874,-0.132193877729,0.743865965808);
    Eigen::Vector3d W2E_translation7(0.631726170645,-0.372926572171,0.596505112564);
    Eigen::Vector3d W2E_translation8( 0.631207631579,-0.26201033499,0.59178258751);
    Eigen::Vector3d W2E_translation9(0.616541480113,-0.230905451757,0.59276403142);
    Eigen::Vector3d W2E_translation10(0.546543639505, -0.32422296009,0.601710172022);
    Eigen::Vector3d W2E_translation11(0.631291695684,-0.12800417008,0.589504745639);
    Eigen::Vector3d W2E_translation12(0.577244982716,-0.131700692805,0.579891350144);
    Eigen::Vector3d W2E_translation13(0.586088332646,-0.226768065736,0.594176876589);
    Eigen::Vector3d W2E_translation14(0.261224211004, -0.312031217039,0.332498436668);
    Eigen::Vector3d W2E_translation15(0.269892498825,-0.321814712451,0.339975602416);
    Eigen::Vector3d W2E_translation16(1.04992040605,-0.376711558246,0.0483870861718);
    Eigen::Vector3d W2E_translation17(0.681523919481,0.0753004040228,0.089058569993);
    Eigen::Vector3d W2E_translation18(0.704565056167,-0.635653126385,0.23506262393);
    Eigen::Vector3d W2E_translation19(0.377301556118, -0.81738332868, -0.0478997869174);

//list
    Eigen::Matrix3d W2E_rotationlist[19]={W2E_rotation_matrix1,W2E_rotation_matrix2,W2E_rotation_matrix3,W2E_rotation_matrix4,W2E_rotation_matrix5,W2E_rotation_matrix6,
                                 W2E_rotation_matrix7,W2E_rotation_matrix8,W2E_rotation_matrix9,W2E_rotation_matrix10,W2E_rotation_matrix11,W2E_rotation_matrix12,
                                 W2E_rotation_matrix13,W2E_rotation_matrix14,W2E_rotation_matrix15,
                                 W2E_rotation_matrix16,W2E_rotation_matrix17,W2E_rotation_matrix18,W2E_rotation_matrix19,
                                 };
    Eigen::Matrix3d C2O_rotationlist[19]={C2O_rotation_matrix1,C2O_rotation_matrix2,C2O_rotation_matrix3,C2O_rotation_matrix4,C2O_rotation_matrix5,C2O_rotation_matrix6,
                                 C2O_rotation_matrix7,C2O_rotation_matrix8,C2O_rotation_matrix9,C2O_rotation_matrix10,C2O_rotation_matrix11,C2O_rotation_matrix12,
                                 C2O_rotation_matrix13,C2O_rotation_matrix14,C2O_rotation_matrix15,C2O_rotation_matrix16,C2O_rotation_matrix17,C2O_rotation_matrix18,
                                 C2O_rotation_matrix19
                                 };

    Eigen::Vector3d W2E_translationlist[19]={W2E_translation1,W2E_translation2,W2E_translation3,W2E_translation4,W2E_translation5,W2E_translation6,
                                            W2E_translation7,W2E_translation8,W2E_translation9,W2E_translation10,W2E_translation11,W2E_translation12,
                                            W2E_translation13,W2E_translation14,W2E_translation15,W2E_translation16,W2E_translation17,W2E_translation18,
                                            W2E_translation19};
    Eigen::Vector3d C2O_translationlist[19]={C2O_translation1,C2O_translation2,C2O_translation3,C2O_translation4,C2O_translation5,C2O_translation6,
                                            C2O_translation7,C2O_translation8,C2O_translation9,C2O_translation10,C2O_translation11,C2O_translation12,
                                            C2O_translation13,C2O_translation14,C2O_translation15,C2O_translation16,C2O_translation17,C2O_translation18,
                                            C2O_translation19};

    int rows=4, cols=4;
    Eigen::Matrix4d W2E_list[19]={};
    Eigen::Matrix4d C2O_list[19]={};

    Eigen::Matrix4d C2O_inv_list[19]={};
    Eigen::Matrix4d W2E_inv_list[19]={};
    for (int i=0;i<19;i++){

        Eigen::Matrix4d W2E(rows,cols);
        W2E << ( Eigen::Matrix3d() << W2E_rotationlist[i]).finished(),
              (Eigen::Vector3d() << W2E_translationlist[i]).finished(),
              Eigen::MatrixXd::Zero(rows-3,3),
              Eigen::MatrixXd::Identity(rows-3,cols-3);
        W2E_list[i]<< W2E;
//inverse
        Eigen::Matrix4d I= Eigen::Matrix4d::Identity(4,4);
        Eigen::Matrix4d W2Einv= W2E.ldlt().solve(I);
        W2E_inv_list[i]<< W2Einv;


        Eigen::Matrix4d C2O(rows,cols);
        C2O << ( Eigen::Matrix3d() << C2O_rotationlist[i]).finished(),
              (Eigen::Vector3d() << C2O_translationlist[i]).finished(),
              Eigen::MatrixXd::Zero(rows-3,3),
              Eigen::MatrixXd::Identity(rows-3,cols-3);
        C2O_list[i]<< C2O;
//inverse

        Eigen::Matrix4d C2Oinv= C2O.ldlt().solve(I);
        C2O_inv_list[i]<< C2Oinv;
     }




    Eigen::Matrix4d E2C(rows,cols);
    E2C << ( Eigen::Matrix3d() << E2C_rotation_matrix).finished(),
          (Eigen::Vector3d() << E2C_translation).finished(),
          Eigen::MatrixXd::Zero(rows-3,3),
          Eigen::MatrixXd::Identity(rows-3,cols-3);
    //inverse
    Eigen::Matrix4d I= Eigen::Matrix4d::Identity(4,4);
    Eigen::Matrix4d E2Cinv= E2C.ldlt().solve(I);


//    Eigen::Matrix4d forward_list[19];
//    Eigen::Matrix4d back_list[19];//back to compute W2E
    Eigen::Matrix4d A_compute[19];
    Eigen::Matrix4d A[19];
//    for (int i=0;i<19;i++){
//        forward_list[i] = W2E_list[i]*E2C*C2O_list[i];
//        std::cout << forward_list[i]<<std::endl;
//    }


    for(int j=0;j<18;j++){
        Eigen::Matrix4d A_com = E2C*C2O_list[j+1]*C2O_inv_list[j]*E2Cinv;
        A_compute[j] << A_com;

        Eigen::Matrix4d A1 = W2E_inv_list[j+1]*W2E_list[j];
        A[j] << A1;

//        back_list[j] = forward_list[j+1]*C2O_list[j]*C2O_inv_list[j]*E2Cinv;
        std::cout<<"*-------A_COMPUTE---------*-*-*-*-*-*-*-*-"<<std::endl;
        std::cout << A_compute[j]<<std::endl;
        std::cout<<"*-------AAAAAAAAAAA---------*-*-*-*-*-*-*-*-"<<std::endl;
        std::cout << A[j]<<std::endl;
//        std::cout<<"*-------C2O-1---------*-*-*-*-*-*-*-*-"<<std::endl;
//        std::cout << C2O_inv_list[j]<<std::endl;
//        std::cout<<"*-------E2C---------*-*-*-*-*-*-*-*-"<<std::endl;
//        std::cout << E2Cinv<<std::endl;

//        std::cout<<"*-------W2E---------*-*-*-*-*-*-*-*-"<<std::endl;
//        std::cout << W2E_list[j]<<std::endl;
//        std::cout<<"*-------back---------*-*-*-*-*-*-*-*-"<<std::endl;
//        std::cout << back_list[j]<<std::endl;
//        std::cout<<"*-------error---------*-*-*-*-*-*-*-*-"<<std::endl;
//        Eigen::Matrix4d error=W2E_list[j] - back_list[j];
//        std::cout << error<<std::endl;
//        std::cout<<"*----------------*-*-*-*-*-*-*-*-"<<std::endl;
    }





}
