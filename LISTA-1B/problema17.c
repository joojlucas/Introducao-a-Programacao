#include <stdio.h>
 
 
	int main(){ 
 
  		double a, b, c, d, l, m, n, p;
       
    	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        
   		if (a >= b && a >= c && a >= d) p = a;
   		else if (b >= a && b >= c && b >= d) p = b;
   		else if (c >= a && c >= b && c >= d) p = c;
        else if (d >= b && d >= c && d >= a) p = d;
        
        if (a <= b && a <= c && a <= d) l = a;
        else if (b <= a && b <= c && b <= d) l = b;
        else if (c <= b && c <= a && c <= d) l = c;
        else if (d <= a && d <= c && d <= b) l = d;
        
        if (a > l && a < p) m = a;
    	else if (b > l && b < p) m = b;
    	else if (c > l && c < p) m = c;
		else if (d > l && d < p) m = d;
	
		if(a > m && a < p) n = a;
		else if(b > m && b < p) n = b;
		else if(c > m && c < p) n = c;
		else if(d > m && d < p) n = d;
	
		printf("%.2lf, %.2lf, %.2lf, %.2lf\n", l, m , n, p);
	
	
	
	
	
	
	return 0; 
}  
