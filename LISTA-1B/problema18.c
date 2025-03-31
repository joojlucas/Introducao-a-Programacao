#include <stdio.h>
 
int trig(double x, double y, double z){
	if((x > (y - z) && x < (y + z)) &&
		(y > (x - z) && y < (x +z)) &&
		(z > (x - y) && z < (x + y))){
			return 1;
		}
		return(0);	
}

int main(){ 
 
 	double a, b, c, p2, at;
 	
 	scanf("%lf %lf %lf", &a, &b, &c);
 	
 	p2 = a + b + c;
 	at = ((a + b) * c) / 2;
 	
 	
 	
 	if (trig(a, b, c)){
 		printf("Perimetro = %.1lf\n", p2);
	}
 
 	else printf("Area = %.1lf\n", at);
 
 
   
   
 
    return 0; 
}  
