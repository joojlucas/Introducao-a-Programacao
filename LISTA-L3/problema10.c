#include <stdio.h>
#include <string.h>
#define tamanho_string 1000
int main(){
    
    int n, i, j, k, l;
    char s1[tamanho_string], s2[tamanho_string];
    
    scanf("%d", &n);
    getchar();
    if(n < 1 || n > 10000) return 0;
    
    for(i = 0; i < n; i++){
    	scanf("%[^\n]", &s1);
    	getchar();
    	
    	for(j = 0; j < strlen(s1); j++){
    		if(s1[j] >= 65 && s1[j] <= 90 || s1[j] >= 97 && s1[j] <= 122){
    			s1[j] = s1[j] + 3;
			}
		}
		for(k = 0, j = j - 1; k < strlen(s1); k++, j--){
			s2[k] = s1[j];
		}
		l = strlen(s1) / 2;
		for(k = l; k < strlen(s1); k++){
			s2[k] = s2[k] - 1;
		}
		for (j = 0; j < strlen(s1); j++){
			printf("%c", s2[j]);
		}
		printf("\n");
		
	}
    

    
    return 0;
}
