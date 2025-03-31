#include <stdio.h>
int main(){ 
    
    int x, y, aux;
    scanf("%d %d", &x, &y);
    aux = 1;
    
    if(x % 2 != 0){
    	printf("%d ", x);
    	while(aux < y){
    		printf("%d ", x + 2);
    		aux++;
    		x += 2;
		}
		printf("\n");
	}
	
	else printf ("PRIMEIRO NUMERO NAO E IMPAR\n");
 
    return 0; 
}
