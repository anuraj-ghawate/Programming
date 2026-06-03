#include<stdio.h>
#define PI 3.14

double CircleArea(float Redius)
{
    double Area = PI * Redius * Redius;

    return Area;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter the Redius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area Of The Circle IS : %lf\n",dRet);

    return 0;
}