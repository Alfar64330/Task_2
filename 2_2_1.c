#include <stdio.h>

int main(){
	
	int x;
	int n;
	int a;
	int b;

    printf("Vvedite x=");
    scanf("%d",&x);

    printf("Vvedite stepen polinoma n=");
    scanf("%d",&n);

    printf("Vvedite a=");
    scanf("%d",&a);
    b=a;
        for(int i=n;i>0;--i){ // 
        scanf("%d",&a);
        b=x*b+a;
   }
   printf("Ответ %d",b);
}
