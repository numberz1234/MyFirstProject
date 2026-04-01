#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));

    int min = 0;
    int max = 11;
    
    int randNUmber;

    randNUmber = (rand() % (max - min + 1)) + min;

    cout << randNUmber<<endl;
    if (randNUmber <= 10 && randNUmber > 5){
        cout<< " Your subscription will expire soon. Renew now!\n ";

    }
    else if(randNUmber <= 5 && randNUmber > 1){

        cout << "Your subscription expires in " << randNUmber<<endl;
        cout << "Renew now and save 10%! \n";
    }
    else if(randNUmber < 2 && randNUmber != 0){

        cout << "YOur subscription expires within a day!!\n";
        cout << "Renew now and save 20%\n";
    }
    else if(randNUmber = 0){
        cout <<"Your subscription has expired\n"; 

    }
    else{

        cout << "You have an active subscription.";
    }




    return 0;
}