#include <stdio.h>
int main(){ 
 
	int n, aux = 1, aux2 = 0;
	
	scanf("%d", &n);
	
	printf("%d = ", n);
    
    while(aux < n){
		if(n % aux == 0){
			if(aux > 1) printf("+ ");
			printf("%d ", aux);
			aux2 = aux2 + aux;
		}
		aux++;	
	}
	
	if(aux2 == n) printf("= %d (NUMERO PERFEITO)\n", n);
	else if(aux2 != n) printf("= %d (NUMERO NAO E PERFEITO)\n", aux2);
    
    return 0; 
}  
    
