#include <stdio.h>
 
int main(){ 
 
    int n, sexo, nmes;
    double aux = 0, porcm = 0, porcmm = 0, porcfm = 0, porc24 = 0;
    
    scanf("%d", &n);
    
    while(aux < 2){
		scanf("%d", &sexo);
		if (sexo < 2){
			scanf("%d", &nmes);
			porcm++;
			if(sexo == 0) porcmm++;
			else if(sexo == 1) porcfm++; 
   			if (nmes <= 24) porc24++;
		}
		aux = sexo;
	}
	porcm = (porcm / n) * 100; 
	
	porcmm = (porcmm / n) * 100;
	
	porcfm = (porcfm / n) * 100;
	
	porc24 = (porc24 / n) * 100;
	
	printf("PORCENTAGEM DE MORTOS = %.2lf\n", porcm);
	printf("PORCENTAGEM DE MASCULINOS MORTOS = %.2lf\n", porcmm);
	printf("PORCENTAGEM DE FEMININOS MORTOS = %.2lf\n", porcfm);
	printf("PORCENTAGEM DE MORTOS COM ATE 24 MESES DE VIDA = %.2lf\n", porc24);
        
    return 0; 
}  
