#include <iostream>
using namespace std;

int main(){

    bool forcifying = true;

    srand(time(NULL)); // involking the function that allows generation of random numbers.
    double** dynamicTwooD = nullptr;
    int rows;
    int columns;
    while(forcifying){
        cout << "\n\nAny number entered should not exceed 3\n";
        cout << "Enter lenth of the rows\n";
        cin >> rows;
        cout<< "Enter length of the columun\n";
        cin >> columns;
        if(rows <= 3 && columns <= 3){
        dynamicTwooD = new double*[rows];

        //using a loop to allocate anay array of integers(columns).

        for(int i = 0; i < rows; i++){
            dynamicTwooD[i] = new double[columns];
        }

        // assigning random double values int the reserved memory.
        for(int n = 0; n < rows; n++){
            for(int j = 0; j < columns; j++){
                double rrand = rand()* 1.01; // to make sure that randoms numbers are of double data type.
                dynamicTwooD[n][j] = rrand;
            }
        }

        //A loop for outputing on the console.
        for(int k =0; k < rows; k++){
            for(int y = 0; y < columns; y++){
                cout << dynamicTwooD[k][y]<< endl;
            }
        }

        forcifying = false;
            
        }
        else{
            
            forcifying = true;
            cout << "\n\nYou entered "<<rows<<" rows and "<<columns<<" columns. You violated the range, try again ";
        }
}

    return 0;
}