#include <stdio.h>

int main()
{
   double x;
   double a;
   double b = 0;
   int n; //максимальная степень

   printf("Vvedite n=");
   scanf("%d",&n);

   printf("Vvedite x=");
   scanf("%lf",&x);

   printf("Vvedite a=");
   for(int i=n;i>=0;i--){
     scanf("%lf",&a);
     b=a*i+x*b;
   }
   b=b/x;

   printf("Iskomoe zhachenie = %f",b);

    return 0;
}
