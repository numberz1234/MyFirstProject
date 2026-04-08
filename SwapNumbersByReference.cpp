#include <iostream>
using namespace std;


void swap(int& var1, int& var2){
    int tempolaryVariable = var1;
    var1 = var2;
    var2 =tempolaryVariable;
}
int main(){

int varA = 25;
int varB = 100;

cout << "varA before swap: " << varA << endl;
cout << "VarB before swap: " << varB << endl; 

swap(varA, varB);

cout << "varA after swap: " << varA << endl; 
cout << "VarB after swap: " << varB << endl; 


    return 0;
}