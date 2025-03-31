#include <stdio.h>
int main(){
    
    
    
	double salh, salporfilho, saltrab, saltotal, salfam;

	int matri, horast, nmrfilhos;
	
	scanf("%d%d%lf%d%lf", &matri, &horast, &salh, &nmrfilhos, &salporfilho);
	
	
	saltrab = salh * horast;
	salfam = salporfilho * nmrfilhos;
	saltotal = saltrab + salfam;
	
	
	printf("MATRICULA DO FUNCIONARIO = %d\n", matri);
	printf("SALARIO TOTAL = %.2lf\n", saltotal);
	printf("FILHOS = %d\n", nmrfilhos);
    
    
    
    
    
    
    return 0;
}
