#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d",&A, &B, &C);
    int MaoirAB = (A+B+abs(A-B))/2;
    int MaoirBC = (B+C+abs(B-C))/2;
    int MaoirAC = (A+C+abs(A-C))/2;
    if(MaoirAB>MaoirBC && MaoirAB>MaoirAC ){
        printf("%d eh o maior\n",MaoirAB);
    }
    else if(MaoirBC>MaoirAC){
        printf("%d eh o maior\n",MaoirBC);
    }
    else{
        printf("%d eh o maior\n",MaoirAC);
    }
    return 0;
}
