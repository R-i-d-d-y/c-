
#include<stdio.h>
main()
{
    double T;
    printf("Enter the temperature\n");
    scanf("%lf",&T);
    char ch[11];
    printf("Enter the unit of the given temperature \n");
    gets(ch);
    if(ch=='celsius')
    {
        double f=1.8*T+32;
        printf("The given temperature in fahrenheit is %lf",f);
    }
    else if(ch=='fahrenheit')
        {
        double c=5*T-160/9;
        printf("The given temperature in celsius is %lf",c);
    }

}
