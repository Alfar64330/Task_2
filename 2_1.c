#include <stdio.h>

int main(){
	
	double var; //вводимое число
	double e;
	double x;
	double x_prev = 1;
	double x_next;
	double delta; //
	int n = 0; //для понимания того, вводится e или x

	while((scanf("%lf", &var)) != EOF) {	

		if(n == 0){
			e = var;
			n += 1;
		} 
		else {
			x = var;
			
			while(1) {
				x_next = 0.5 * (x_prev + x/x_prev);
				delta = x_prev - x_next;
				    if(delta < 0) delta *= -1;
				x_prev = x_next;
				if(delta < e) break; 
			}
			printf("\n%.10g", x_next);
			x_prev = 1;
			x_next = 0;
			delta = 0;
		}		
	}
	
	return 0; 
}
