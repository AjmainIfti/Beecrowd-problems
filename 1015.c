#include<stdio.h>
#include<math.h>
int main()
{
   double x1, x2, y1, y2, K, D;
   double A[2] ={x1, y1};
   double B[2] ={x2, y2};

   scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
   K = (pow((x2 - x1),2) + pow((y2 - y1),2));
   D = sqrt(K);

   printf("%.4lf\n",D);
   return 0;
}
