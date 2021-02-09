   //#####################################//
  //####### By Tiago A. Fontenele #######//
 //############ 30/11/2020 #############//
//#####################################//
#include <iostream>
#include <vector>

int main(void){ 
	int qtd_dominos = 0;
	int domino = 0;
	int flag = 1;
	std::vector<int> dominos;
	
	std::cin >> qtd_dominos;
	dominos.resize(qtd_dominos);

	for(int i = 0; i < qtd_dominos; i++){
		std::cin >> domino;
		dominos[i] = domino;
	}
	for(int j = 0; j < qtd_dominos - 1; j++){
		if(dominos[j] <= dominos[j + 1]){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}	
	}
	if(flag == 1){
		std::cout << "ok";
	}
	else{
		std::cout << "precisa de ajuste";
	}
		
	return 0;
}
