#include <stdio.h>
#define tamanho_vetor 10000
void troca (int *x, int* y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
void bubble(int v[], int n){
    int i, j;
    for(i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            if(v[j] > v[j+1]){
                troca(&v[j], &v[j+1]);
            }
        }
    }
}
int main(){
    
    int n[tamanho_vetor], v[tamanho_vetor], i, j, aux;
    
    while(aux < 1){
    	scanf("%d", &n[i]);
    	if(n[i] == 0) aux++;
    	for(j = 0; j < n[i]; j++){
			scanf("%d", &v[j]);
			bubble(v, j); 
			for(j = 0; j < n[i]; j++){
				printf("%d ", v[j]);
			}
			printf("\n");
		}
		i++;
	}
    
    return 0;
}
