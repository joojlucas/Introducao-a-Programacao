#include <stdio.h>
int main(){
    
    
    char sexo;
	int idade;
	
	scanf("%c %d", &sexo, &idade);
	
	if(sexo == 'M'){
		
		if(idade <= 12){
			
			printf("Bem vindo! Voce deve se instalar no alojamento 1 do bloco B");
		}
				
		else if(idade > 12 && idade <= 16){
			
			printf("Bem vindo! Voce deve se instalar no alojamento 2 do bloco B");
		}	
		
	    else if(idade > 16){
	
			printf("Bem vindo! Voce deve se instalar no alojamento 3 do bloco B");
		}
	}
	
	
    else if(sexo == 'F'){
		
		if(idade <= 13){
		
		printf("Bem vinda! Voce deve se instalar no alojamento 5 do bloco A");
		}	
	   
	   if(idade > 13 && idade <= 16){
	   	
	   	printf("Bem vinda! Voce deve se instalar no alojamento 6 do bloco A");
	   }

		if(idade > 16){
		
		printf("Bem vinda! Voce deve se instalar no alojamento 7 do bloco A");
		}
	}

	
    
    
    
    
    return 0;
}
