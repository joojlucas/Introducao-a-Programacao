#include <stdio.h>
int primo(int x){
	int divisores = 0, aux = 1;
	while(aux <= x){
		if(x % aux == 0) divisores++;
		aux++;
	}
	if(divisores == 2) return 1;
	else return 0;
}

int main(){ 
 
	int n, aux = 2;
	
	scanf("%d", &n);
	
	while(n <= 1){
		if(n <= 1) printf("Fatoracao nao e possivel para o numero %d!\n", n);
		scanf("%d", &n);
	}

	printf("%d = ", n);
    
   	while(aux <= n){
    	if(primo(aux)){
   			while(n % aux == 0){
   				n = n / aux;
   				printf("%d ", aux);
   				if((n / aux) > 0)printf("x ");
			}
		}
		aux++;	
	}

	
    return 0; 
}  
