#include <stdio.h>
int soma_div(int n){
	int aux = 1, aux1 = 0;
	while(aux < n){
		if(n % aux ==0){
			aux1 += aux;
		}
	}
	return aux1;
}
int namigos(int a, int b){
	if(soma_div(a) == b && soma_div(b) == a && a < b) return 1;
	return 0;
}
	
int main(){
	int n, aux = 1, x = 220, y;
	scanf("%d", &n);
		
	while(aux < 9){
		y = soma_div(x);
		if(namigos(x, y)) printf("(%d,%d)\n", x, y);
		x++;
		aux++;
	}
	
	
	
	
	
	
	
	
    
    return 0; 
}  
