#include <stdio.h>

int main(){
	float seq[5], min;
	int count, aux, cp;
	for(count = 0; count < 5; count++)
		scanf("%f", &seq[count]);
	for(count = 0; count < 5; count++){
		min = seq[count];
		cp = count;
		for(aux = count + 1; aux < 5; aux++){
			if(seq[aux] < seq[count]){
				min = seq[aux];
				cp = aux;
			}
		}
		seq[cp] = seq[count];
		seq[count] = min;
	}
	printf("%.2f, %.2f, %.2f, %.2f, %.2f\n", seq[0], seq[1], seq[2], seq[3], seq[4]);
	return 0;
}
