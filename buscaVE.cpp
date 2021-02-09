   //#####################################//
  //####### By Tiago A. Fontenele #######//
 //############ 01/12/2020 #############//
//#####################################//
#include <iostream>
#include <iomanip>

struct Aluno{
    int matricula = 0;
    char nome[50];
    float media = 0;
};

int main(void){
	std::cout << std::fixed << std::setprecision(1);
	int qtd_aluns = 0;
	int busc_matricula = 0;
	int i = 0;
	int flag = 0;
	
	std::cin >> qtd_aluns;
	Aluno vet_alunox[qtd_aluns];

	for(i = 0; i < qtd_aluns; i++){
		std::cin >> vet_alunox[i].matricula;
		std::cin.ignore();
		std::cin.get(vet_alunox[i].nome, 50, '\n'); 
		std::cin >> vet_alunox[i].media;
	}
	
	std::cin >> busc_matricula;
	
		for(i = 0; i < qtd_aluns; i++){
			if(vet_alunox[i].matricula == busc_matricula){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			std::cout << vet_alunox[i].nome << "\n";
			std::cout << vet_alunox[i].media;
		}
		else{
			std::cout << "NAO ENCONTRADA";
		}
	
	return 0;
}
