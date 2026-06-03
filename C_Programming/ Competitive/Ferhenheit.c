#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCelcius = (fTemp - 32) * (5.0 / 9.0);

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter tempreture in Fehrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("In Celcius : %lf\n",dRet);

    return 0;
}