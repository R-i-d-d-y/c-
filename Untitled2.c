#include<stdio.h>
int main()
{
    double T;
    char ch;
    printf("Enter the unit of the given temperature \n");
    scanf("%c",&ch);
    printf("Enter the temperature\n");
    scanf("%lf",&T);
    if(ch=='c')
    {
        double f=(1.8*T)+32;
        printf("The given temperature in fahrenheit is %lf",f);
    }
    else if(ch=='f')
        {
        double c=5*T-160/9;
        printf("The given temperature in celsius is %lf",c);
    }

}
