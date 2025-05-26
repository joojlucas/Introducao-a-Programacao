#include <stdio.h>
#define tamanho 100

int main(){
	
	int x, y, z[tamanho], i, j;
	
	scanf("%d", &x);
	
	int npar[x], nimpar[x], cp[x], ci[x];
	
	for(i = 0; i < x; i++){
		scanf("%d", &y);
		for(j = 0, cp[i] = 0, ci[i] = 0; j < y; j++){
			scanf("%d", &z[j]);
			if(z[j] % 2 == 0){
				if(cp[i] == 0) npar[i] = z[j];
				if(j > 0 && z[j] >= npar[i]) npar[i] = z[j];
				cp[i]++;
			}
			if(z[j] % 2 != 0){
				if(ci[i] == 0) nimpar[i] = z[j];
				if(j > 0 && z[j] <= nimpar[i]) nimpar[i] = z[j];
				ci[i]++;
			}
		}
	}
	
	
	for(i = 0; i < x; i++){
		if(cp[i] > 0){
			printf("%d\n", npar[i]);
		}
		else printf("Nao ha valores pares.\n");
		if(ci[i] > 0){
			printf("%d\n", nimpar[i]);
		}
		else printf("Nao ha valores impares.\n");
	}
	
	
	return 0;
}


