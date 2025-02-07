#include<stdio.h>
int main()
{
    char NAME[20];
    double SALARY, SELLS, TOTAL;
    scanf("%s %lf %lf",&NAME,&SALARY,&SELLS);
    TOTAL = SALARY + ((SELLS*15)/100);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
