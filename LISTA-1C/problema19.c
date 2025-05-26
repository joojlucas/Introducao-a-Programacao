#include <stdio.h>
int main(){ 
 
	int n;
    scanf("%d", &n);
    
    n = n + 31 * (n * 2) + 32 * n;
    
    printf("%d\n", n);
    
    return 0; 
}  
