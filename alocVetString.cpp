   //#####################################//
  //####### By Tiago A. Fontenele #######//
 //############ 11/12/2020 #############//
//#####################################//
#include <iostream>
#include <cstring>

char **sort(char **nomes, int qtd_nomes){
	int resp = 0;
	char *temp;	
	
	for(int i = 0; i < qtd_nomes; i ++){
		for(int j = 0; j < qtd_nomes; j++){
			resp = strcmp(nomes[i], nomes[j]);
			if(resp < 0){
				temp = nomes[j];
				nomes[j] = nomes[i];
				nomes[i] = temp;
			}
		}
	}
	delete temp;
	return nomes;
}

char **recebeDados(char **nomes, int qtd_nomes){
	int tam_nome = 0;
	char *temp;
	for(int i = 0; i < qtd_nomes; i++){
		std::cin >> tam_nome;
		temp = new char[tam_nome + 1];
		std::cin.ignore();
		std::cin.get(temp, tam_nome + 1);
		nomes[i] = temp;
	}
	delete temp;
	return nomes;
}

void printaVet(char **nomes, int qtd_nomes){
	for(int i = 0; i < qtd_nomes; i++){
		std::cout << nomes[i] << std::endl;
	}
}

int main(void){
	int qtd_nomes = 0;
	
	std::cin >> qtd_nomes;
	char **nomes = new (std::nothrow) char*[qtd_nomes];
	if (nomes == nullptr){
		std::cout << "Erro: não foi possível alocar memória.";
		return 0;
	}
	recebeDados(nomes, qtd_nomes);
	sort(nomes, qtd_nomes);
	printaVet(nomes, qtd_nomes);
	delete []nomes;
	
    return 0;
}











