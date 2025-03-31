#include <stdio.h>
 
void troca (double *x, double*y){
	double aux;
	aux = *x;
	*x = *y;
	*y = aux;
}
 
int main(){ 
	
	double a, b, c, d, e;
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	
	if(a > b){
		troca(&a, &b);
	}
 	if(a > c){
		troca(&a, &c);
	}
	if(a > d){
		troca(&a, &d);
	}
	if(a > e){
		troca(&a, &e);
	}
 	if(b > c){
		troca(&b, &c);
	}
	if(b > d){
		troca(&b, &d);
	}
	if(b > e){
		troca(&b, &e);
	}
   	if(c > d){
		troca(&c, &d);
	}
    if(c > e){
		troca(&c, &e);
	}
	if(d > e){
		troca(&d, &e);
	}
   
	printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n",a, b, c, d, e);
 
    return 0; 
}  
