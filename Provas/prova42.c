#include <stdio.h>
typedef struct{
    int cdgmerc;
    float preco;
    char nomemerc[30];
}prod;
typedef struct{
    char nomecli[50];
    int cdgcompr;
    int quant; 
}c;
int main(){
    
    int n, m, i, j;
    
    scanf("%d", &n);
    if(n > 20 || n < 1) return 0;
    
    prod merca[n];
    
    for(i = 0; i < n; i++){
        scanf("%d %f", &merca[i].cdgmerc, &merca[i].preco);
        getchar();
        scanf("%[^\n]", merca[i].nomemerc);
    }
    
    scanf("%d", &m);
    getchar();
    if(m > 100 || m < 1) return 0;
    
    c cliente[m];
    
    for(i = 0; i < m; i++){
        scanf("%[^\n]", cliente[i].nomecli);
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
    
    return 0;
}
