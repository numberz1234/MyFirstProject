#include <iostream>
#include<cmath>
#define age 22
#define reg_number "BSC/COM/NE/26/24"
#define password "998715181.java"
using namespace std;


namespace varibles{
    int op;
    int op2;
    int op3;
    int op4;
}

int main(){
    cout <<"Log in\n";
    cout<<"_____________________________\n";
    string reg = "";
    string pswd = "";
    cout << "Enter registration number\n";
    cin >> reg;
    cout<< "Enter password";
    cin >> pswd;

    if(reg == reg_number && pswd == password){
        cout << "WELCOME TO THE STUDENT PORTAL\n";
         cout<<"_____________________________\n";
         cout <<"1. Results\n";
         cout <<"2. My appeal\n";
         cout <<"3. Timetables\n";
         cout <<"4. Assessments\n";

         cin >>varibles::op;

         switch (varibles::op)
         {
         case 1: cout <<"Your results will appear here if out!!";
            break;
        case 2: cout <<"All appeals are not available since exams for this semester are not out!!";
            break;
        case 3: cout <<"Please wait as we are processing your request!!";
            break;
        case 4: cout <<"Assessments are not ready!!!!";
            break;
         default:cout <<"Please make sure you have entered a valid option";
                    cout <<"____________________________________";
                    cout <<"Selet 1 if you want to continue";
                    break;
                    }
                    
                        
           
         }
         
         
    }
       
    return 0;
}

