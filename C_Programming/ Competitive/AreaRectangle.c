#include<stdio.h>

double RectArea(float Width, float Height)
{
    double Area = 0;

    Area =  Width * Height;

    return Area;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    double dRet = 0;

    printf("Enter the Width : \n");
    scanf("%f",&fValue1);

    printf("Enter the Heaight : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area Of The Rectangle IS : %lf\n",dRet);

    return 0;
}