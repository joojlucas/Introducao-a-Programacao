#include <stdio.h>
int main(){
    
    
    
	double n1, n2, n3, n4, n5, a, b, c, d, e;
	
	scanf("%lf%lf%lf%lf%lf", &n1, &n2, &n3, &n4, &n5);
	
		
		
	
	if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
		a = n1;  }
			
    else if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){
		a = n2;  }
    
   	else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){
		a = n3;  }
    
   	else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5){
		a = n4;  }
		
	else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4){
		a = n5;	 }
		
	
	
		
	if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
		e = n1;	 }
    
    else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
		e = n2;	 }
	
	else if(n3 > n2 && n3 > n1 && n3 > n4 && n3 > n5){
		e = n3;	 }   
     
    else if(n4 > n2 && n4 > n3 && n4 > n1 && n4 > n5){
		e = n4;	 }
     
	else if(n5 > n2 && n5 > n3 && n5 > n4 && n5 > n1){
		e = n5;	 }
		
		
		
	if(n1 > a && n1 < e){
		b = n1;	 }
		
	else if(n2 > a && n2 < e){
		b = n2;	 }
	
	else if(n3 > a && n3 < e){
		b = n3;	 }
		
	else if(n4 > a && n4 < e){
		b = n4;	 }	
	
	else if(n5 > a && n5 < e){
		b = n5;	 }
	
	
	
	if(n1 > b && n1 < e){
		c = n1;	 }
		
	else if(n2 > b && n2 < e){
		c = n2;	 }
	
	else if(n3 > b && n3 < e){
		c = n3;	 }
	
	else if(n4 > b && n4 < e){
		c = n4;	 }	
	
	else if(n5 > b && n5 < e){
		c = n5;	 }
		
	
	
	if(n1 > c && n1 < e){
		d = n1;	 }
	
	else if(n2 > c && n2 < e){
		d = n2;	 }
	
	else if(n3 > c && n3 < e){
		d = n3;	 }
	
	else if(n4 > c && n4 < e){
		d = n4;	 }	
	
	else if(n5 > c && n5 < e){
		d = n5;	 }
	
	
	
	printf("%.2lf, %.2lf, %.2lf, %.2lf, %.2lf\n", a, b, c, d, e);
	
	
	
	
	
	
	
	
	
	
	return 0;
}

