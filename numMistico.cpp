   //#####################################//
  //####### By Tiago A. Fontenele #######//
 //############ 21/12/2020 #############//
//#####################################//
#include <iostream>

using namespace std;
int sumTriRec(int n){                                         
	if (n == 1) return n;  
	n += sumTriRec(n -1);
	cout << n;                      
	return n;
}      

int main(void){
	int n = 0;
	cin >> n;
	sumTriRec(n);
	//cout <<sumTriRec(n);
	//cout << n; 
   return 0;
}

