#include <stdio.h>
#include <string.h>
#define tamanho_string 500
int main(){
    
    int i, j, ns;
    char s[tamanho_string];
    
    while(scanf("%[^\n]", &s) != EOF){
    	getchar ();
        ns = strlen(s);
        for (i = ns - 1; i >= 0; i--){
            printf("%c", s[i]);
        }
        printf("\n");
   }
    
    return 0;
}
