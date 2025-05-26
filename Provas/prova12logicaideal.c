#include <stdio.h>
int main(){
    
    
    
	double n1, n2, n3, a, b, c;
	
	scanf("%lf%lf%lf", &n1, &n2, &n3);
	
	
	
	//a
	if(n1 < n2 && n1 < n3){ 
		a = n1;	
	}
	
	else if(n2 < n1 && n2 < n3){ 
		a = n2;	
	}
	
	else if(n3 < n1 && n3 < n2){ 
		a = n3;	
	}
	
	
	//c
	if(n1 > n2 && n1 > n3){
		c = n1;	
	}
	
	else if(n2 > n1 && n2 > n3){
		c = n2;	
	}
	
	else if(n3 > n1 && n3 > n2){
		c = n3;	
	}
	
	
	//b
	if(n1 > a && n1 < c){
		b = n1;
	}
	
	else if(n2 > a && n2 < c){
		b = n2;
	}
	
	else if(n3 > a && n3 < c){
		b = n3;
	}
	
	
	
	printf("%.2lf, %.2lf, %.2lf\n", a, b, c);
	
	
	
	
	
	
	
	
	
	
	return 0;
}

