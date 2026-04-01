#include <iostream>
using namespace std;

int main(){
    
    int* pInteger = new int;
    string* name = new string;
    cout<< "Enter an integer:  ";
    cin >> *pInteger;
    cout<<"Enter Your Name.  ";
    cin >> *name;
    cout << "You entered an intger : "<< *pInteger<<endl;
    cout <<"Your Name is  "<< *name;
    delete pInteger;
    delete name;



    return 0;
}