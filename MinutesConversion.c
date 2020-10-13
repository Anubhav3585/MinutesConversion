#include <stdio.h>
#include <math.h>


int main()
{
    double Min,Years,Days;
    printf("enter the Number of Minutes ::");

    scanf("%lf",&Min);

    Years=(Min)/(365*24*60);

    Days=(Min)/(24*60);

    printf("\nNumber of Years ::%lf  \nNumber of Days::%lf",Years,Days);

    return 0;

}
