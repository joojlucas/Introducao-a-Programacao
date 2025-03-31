#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	int cdgmerc;
	float preco;
	char *nomemerc;
}prod;
typedef struct{
	char *nomecli;
	int cdgcompr;
	int quant; 
}c;
int main(){
	
	int n, m, i, j;
	
	scanf("%d", &n);
	if(n > 20 || n < 1) return 0;
	
	prod merca[n];
	
	char buffer[1000];
	
	for(i = 0; i < n; i++){
		scanf("%d %f", &merca[i].cdgmerc, &merca[i].preco);
		getchar();
		scanf("%[^\n]", buffer);
		merca[i].nomemerc = malloc((strlen(buffer) + 1) * sizeof(char));
		strcpy(merca[i].nomemerc, buffer);
	}
	
	scanf("%d", &m);
	getchar();
	if(m > 100 || m < 1) return 0;
	
	c cliente[m];
	
	for(i = 0; i < m; i++){
		scanf("%[^\n]", buffer);
		cliente[i].nomecli = malloc((strlen(buffer) + 1) * sizeof(char));
		strcpy(cliente[i].nomecli, buffer);
		scanf("%d %d", &cliente[i].cdgcompr, &cliente[i].quant);
		getchar();
	}
	
	for(i = 0; i < m; i++){
		printf("Pedido de Compra do Cliente: %d\n", i + 1);
		printf("Nome do cliente: %s\n", cliente[i].nomecli);
		for(j = 0; j < n; j++){
			if(cliente[i].cdgcompr == merca[j].cdgmerc) printf("Nome da mercadoria: %s\n", merca[j].nomemerc);
		}
		printf("Quantidade: %d\n", cliente[i].quant);
		for(j = 0; j < n; j++){
			if(cliente[i].cdgcompr == merca[j].cdgmerc){
				printf("Valor da Mercadoria: %.2f\n", merca[j].preco);
				printf("Valor total da Compra: %.2f\n", cliente[i].quant * merca[j].preco);
			}
		}
		printf("\n");	
	}
	
	for(i = 0; i < n; i++){
		free(merca[i].nomemerc);
	}
	for(i = 0; i < m; i++){
		free(cliente[i].nomecli);
	}
	
	return 0;
}
