#include <iostream>
using namespace std;

int main(){

    string checkB[] = {

        "B4323", "G5534", "B5353","H7766","BTTR5","A66"
    };


    for(int i = 0; i < 6; i++){
        string nu = checkB[i];

        if(nu[0] == 'B'){
            cout<< nu<<endl;
        }
    }



    return 0;
}