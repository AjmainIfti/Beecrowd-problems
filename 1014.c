#include <stdio.h>
int main()
{
    int X;
    float Y;
    double Avg;
    scanf("%d %f",&X, &Y);
    
    Avg = X/Y;
    printf("%.3lf km/l\n",Avg);
    return 0;
}
