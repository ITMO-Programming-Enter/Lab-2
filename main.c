#include <stdio.h>
#include <math.h>


int main() {
    double pi = 3.14159265;
    double x;
    scanf("%lf",&x);
    double conv=pi/180;
    double z1=(sin(2*x*conv)+sin(5*x*conv)-sin(3*x*conv))/(cos(x*conv)-cos(3*x*conv)+cos(5*x*conv));
    double z2 = tan(3*x*conv);
    printf("%f\n",z1);
    printf("%f",z2);
}




