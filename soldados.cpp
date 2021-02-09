//By Tiago A. Fontenele
//24/11/2020
#include <iostream>
int main(void){
    int sold[3][3];
    int cont=0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            std::cin >> sold[i][j];
        }
    }
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            if(i > 0 && sold[i-1][j] > sold[i][j]){
                cont++;
            }
        }
    }
    std::cout << cont;
    return 0;
}

