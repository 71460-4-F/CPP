   //#####################################//
  //####### By Tiago A. Fontenele #######//
 //############ 02/12/2020 #############//
//#####################################//
#include <iostream>

// Implemente a função 'troca'.
void troca(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

int main(void){
   int x, y;
   std::cin >> x;
   std::cin >> y;
   
   // Chame a função 'troca' para trocar os valores de x e y.
   troca(&x, &y);

   std::cout << x << " " << y << std::endl;
   
   return 0;
}
