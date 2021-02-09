   //#####################################//
  //####### By Tiago A. Fontenele #######//
 //############ 01/12/2020 #############//
//#####################################//
#include <iostream>
//#include <vector>
int main(void){
	int qtd_produtos = 0;
	int i = 0;
	int pont_j01 = 0;
	int pont_j02 = 0;
	
	std::cin >> qtd_produtos;
	float valor_produto[qtd_produtos];
	float chute_j01[qtd_produtos];
	char chute_j02[qtd_produtos];
	
	for(i = 0; i < qtd_produtos; i++){
		std::cin >> valor_produto[i];
	}
	for(i = 0; i < qtd_produtos; i++){
		std::cin >> chute_j01[i];
	}
	for(i = 0; i < qtd_produtos; i++){
		std::cin >> chute_j02[i];
	}
	for(i = 0; i < qtd_produtos; i++){
		if((valor_produto[i] ==  chute_j01[i]) || (valor_produto[i] > chute_j01[i] && chute_j02[i] == 'm') || (valor_produto[i] < chute_j01[i] && chute_j02[i] =='M')){
			pont_j01++;
		}
		else{
			pont_j02++;
		}
	}
	if(pont_j01 > pont_j02){
		std::cout << "primeiro";
	}
	else if(pont_j01 < pont_j02){
		std::cout << "segundo";
	}
	else{
		std::cout << "empate";
	}
	
	return 0;
}
