#include <stdio.h>
#include <string.h>
#define tamanho_string 500
int strcmpnerd(char str1[], char str2[]){
	int i, ns1;
	ns1 = strlen(str1);
	for(i = 0; i < ns1; i++){
		if(str1[i] != str2[i] && str1[i] < str2[i]) return -1;
		else if(str1[i] != str2[i] && str1[i] > str2[i]) return 1;
	}
	return 0;
	
}
int main(){
    
    int i, n;
    char s1[tamanho_string], s2[tamanho_string];
    
    scanf("%d", &n);
    getchar ();
    
    for(i = 0; i < n; i++){
    	scanf("%[^\n]", &s1);
    	getchar ();
    	scanf("%[^\n]", &s2);
    	getchar ();
    	printf("%d\n", strcmpnerd(s1, s2));
    }
    
    return 0;
}
