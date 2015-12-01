#include <iostream>
#include <Eigen/Dense>
#include <math.h>

// import most common Eigen types 
using namespace std;
using namespace Eigen;



int main()
{

    Matrix2f R0b,Rbs;
    Matrix3f T0b,Tbs, q;
    Vector2f P0(10.8,-2.7);
    Vector2f mb (3.1, 1.2);
    Vector3f qs (12,3,1);
    Vector3f q0;

    int t = 28;
    int b = 41;

    R0b <<  cos(t), -sin(t), sin(t), cos(t);
    Rbs <<  cos(b), -sin(b), sin(b), cos(b);
    T0b <<  R0b, P0, 0, 0, 1;
    Tbs <<  Rbs, mb, 0, 0, 1;
    q = T0b*Tbs;
    q0 = q*qs;

    std::cout << q0 << std::endl;

    return 0;
}
