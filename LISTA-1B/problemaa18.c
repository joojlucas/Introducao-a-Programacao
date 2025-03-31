int main(){ 
 
  		double a, b, c, d;
       
    	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        
   		if (a >= b && b >= c && c >= d){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", d, c, b, a);
		}
		else if (a >= b && b >= d && d >= c){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", c, d, b, a);
		}
		else if (a >= c && c >= b && b >= d){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", d, b, c, a);
		}
		else if (a >= d && d >= b && b >= c){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", c, b, d, a);
		}
		else if (a >= d && d >= c && c >= b){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", b, c, d, a);
		}
		else if (a >= c && c >= d && d >= b){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", b, d, c, a);
		}
	
	
		if (b >= a && a >= c && c >= d){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", d, c, a, b);
		}
		else if (b >= a && a >= d && d >= c){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", c, d, a, b);
		}
		else if (b >= c && c >= a && a >= d){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", d, a, c, b);
		}
		else if (b >= d && d >= a && a >= c){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", c, a, d, b);
		}
		else if (b >= d && d >= c && c >= a){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", a, c, d, b);
		}
		else if (b >= c && c >= d && d >= a){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", a, d, c, b);
		}
	
	
		if (c >= b && b >= a && a >= d){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", d, a, b, c);
		}
		else if (c >= b && b >= d && d >= a){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", a, d, b, c);
		}
		else if (c >= a && a >= b && b >= d){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", d, b, a, c);
		}
		else if (c >= d && d >= b && b >= a){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", a, b, d, c);
		}
		else if (c >= d && d >= a && a >= b){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", b, c, d, c);
		}
		else if (c >= a && a >= d && d >= b){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", b, d, a, c);
		}
	
	
		if (d >= b && b >= c && c >= a){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", a, c, b, d);
		}
		else if (d >= b && b >= a && a >= c){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", c, a, b, d);
		}
		else if (d >= c && c >= b && b >= a){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", a, b, c, d);
		}
		else if (d >= a && a >= b && b >= c){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", c, b, a, d);
		}
		else if (d >= a && a >= c && c >= b){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", b, c, a, d);
		}
		else if (d >= c && c >= a && a >= b){
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", b, a, c, d);
		}
	
	
	
	
	
	
	return 0; 
}  

