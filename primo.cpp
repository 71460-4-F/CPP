#include <iostream>
#include <math.h>

int raiz(int num){
int raiz;
raiz = sqrt(num); 
return raiz;
}

bool primo(int p){
	int i = 0;
	int raiz_aprox = 0;
	int resto = 0;
	int qtd_div = 0;
	raiz_aprox = raiz(p);
	if(p == 1){
		return false;
	}
	for(i = 2; i <= raiz_aprox; i++){
		resto = p % i;
		if(resto == 0){
			qtd_div ++;
		}
		//printf("valor de qtd_div: %d \n", qtd_div);
		if(qtd_div > 0){
			return false;
		}
	}
	return true;
}

void primos(){
	int num1, num2;
	printf("numero 1: ");
	scanf("%i", &num1);
	printf("numero 2: ");
	scanf("%i", &num2);
	while(num1 <= num2){
		if(primo(num1) == 1){
			printf("%d e primo \n", num1);
		}
		else 
		printf("%d nao e primo \n", num1);
		num1++;
	}
}

int main(){
	primos();

	return 0;
}
