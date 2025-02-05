#include<stdio.h>
int main()
{
    int NUMBER,HOURS;
    float PAYMENT,SALARY;
    scanf("%d %d %f",&NUMBER,&HOURS,&PAYMENT);
    SALARY = HOURS*PAYMENT;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
