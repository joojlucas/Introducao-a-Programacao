#include <stdio.h>
#include <math.h>
struct ponto{
	int x;
	int y;
};
int main(){
	
	struct ponto pontos[2];
	
	scanf("%d %d %d %d", &pontos[0].x, &pontos[0].y, &pontos[1].x, &pontos[1].y);
	
	double dist;
	
	dist = sqrt(((pontos[1].x - pontos[0].x) * (pontos[1].x - pontos[0].x)) + (pontos[1].y - pontos[0].y) * (pontos[1].y - pontos[0].y));
	
	printf("A POHA DA DISTANCIA eh %.2lf\n", dist);
	
	return 0;
}
