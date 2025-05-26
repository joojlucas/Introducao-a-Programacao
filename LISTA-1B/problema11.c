#include <stdio.h> 
 
 int main(){ 
	
	int n, d, m, a;
	scanf("%d", &n);
	
	d = n / 1000000;
	m = (n % 1000000) / 10000;
	a = (n % 1000000) % 10000;
	
	if(a > 1582){
		if(a % 100 != 0&&a % 4 == 0) printf("Data invalida!");
		if(a % 100 = 0 && a % 400 = 0) printf("Data invalida!");
	}
		
	printf("%d ", d);
		
	if(m == 1) printf("de janeiro");
	else if(m == 2) printf("de fevereiro");
	else if(m == 3) printf("de marco");
	else if(m == 4) printf("de abril");
	else if(m == 5) printf("de maio");
	else if(m == 6) printf("de junho");
	else if(m == 7) printf("de julho");
	else if(m == 8) printf("de agosto");
	else if(m == 9) printf("de setembro");
	else if(m == 10) printf("de outubro");
	else if(m == 11) printf("de novembro");
	else if(m == 12) printf("de dezembro");
	
	printf(" de %d\n", a);
	
	      ,       
	
	
	
	return 0; 
}  
      
