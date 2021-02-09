//#include <iostream>
//#include <algorithm>

//using namespace std;

//int main() {
    //string WordArray[] = {"Paulo Souza","Katia Borges","Tiago","Paulo Sousa","Anas","Ana"};
    //sort(begin(WordArray), end(WordArray));  /*Sort the Array*/
    //for(auto& Word: WordArray){
       //cout<<Word<<endl;                     /*Print Every String Element*/
    //}
    //return 0;
//}
// outro modo:
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int qtdNomes = 0;
	int resp = 0;
	string temp;
				char aux1[80];
			char aux2[80];
	
    string nomes[] = {"Paulo Souza","Katia Borges","Tiago","Paulo Sousa","Anas","Ana"};
    sort(begin(nomes), end(nomes));  /*Sort the Array*/
    for(auto& Word: nomes){
       cout<<Word<<endl;                     /*Print Every String Element*/
    }
    cout << endl;
    
    for(auto x: nomes){
		qtdNomes++;
	}
	
	for(int i = 0; i < qtdNomes; i ++){
		for(int j = 0; j < qtdNomes; j++){
			 strcpy(aux1, nomes[i].c_str());
			 strcpy(aux2, nomes[j].c_str());
			resp = strcmp(aux1, aux2);
			if(resp == -1){
				temp = nomes[j];
				nomes[j] = nomes[i];
				nomes[i] = temp;
			}
		}
	}
	cout << "resultdo final:" << endl;
	    for(auto& Word: nomes){
       cout<<Word<<endl;                     /*Print Every String Element*/
    }
    return 0;
}
