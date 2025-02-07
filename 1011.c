#include<stdio.h>
int main()
{
    double R,VOLUME;
    scanf("%lf",&R);
    VOLUME = ((4*3.14159*R*R*R)/3);
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
