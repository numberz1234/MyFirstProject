#include <iostream>
#include <cmath>
#define PI 3.142
using namespace std;

double CalculateArea(double radius);
double CalculateVolume(double radius);
double Factorize(int a, int b, int c);

// function for calculating the area of the circle.
double CalculateArea(double radius){
    double rad = pow(radius, 2);

    double area = rad * PI;

    return area;
}

// function for Calculating the volume of sphere.
double CalculateVolume(double radius){

    double radiusTopowerThree = pow(radius, 3);

    double fourOverThree = 4 / 3;

    double volumeOfSphere = (radiusTopowerThree *PI) * fourOverThree ;

    return volumeOfSphere;
}

// Function for Calculating the factors of a quadratic equation. Basically this uses Quadratic formula.
double Factorize(int a, int b, int c){

    b = b * -1;

    double bSquare = pow(b, 2);
    double fourAC = 4 * a * c;
    double bSquaredMinus4ac = bSquare - fourAC;

    if(bSquaredMinus4ac < 0){
        bSquaredMinus4ac *= -1;
        
        double squareroot = sqrt(bSquaredMinus4ac);
        squareroot *= -1;
        
        double twoA = 2 * a; // Checking if there will be dividion by zero.
            if(twoA != 0){
                 double root1 = (b + squareroot);
                 double root2 = (b - squareroot);

                 cout <<"root1 = "<< root1<< endl;
                 cout << "root2 = "<< root2<<endl;
            }else{
                cout<< "The value of 'a' can not be zero, this leads to division by zero during the operations!!!";
            }

        
    }else{
        double two = 2 * a;  // Checking if there will be dividion by zero.
        if(two != 0){
            double squareroot = sqrt(bSquaredMinus4ac);
            double root1 = (b + squareroot)/two;
            double root2 = (b - squareroot)/two;
            cout <<"root1 = "<< root1<< endl<<endl;
            cout << "root2 = "<< root2<<endl<<endl;
        }else{
            cout<< "The value of 'a' can not be zero, this leads to division by zero during the operations!!!";
        }
        
    }

    return true;

}

int main(){
        cout << "Please select!\n";
        cout << "____________________________\n";
        cout << "1.Area of the circle\n";
        cout <<"2.Volume of the Sphere\n";
        cout << "3.Factorization\n";
        int ap;
        cin >> ap;

        switch(ap){
            case 1: {double radi;
                    cout <<"Enter radius!\n";
                    cin >> radi;
                    double out =  CalculateArea(radi);
                    cout << "Area of the circle with radius "<< radi<< " is "<< out<< endl<< endl;
                    break;}

            case 2: {double radii;
                    cout <<"Enter the radius of the Sphere whose volume is to be calculated!\n\n";
                    cin >> radii;
                    double volume = CalculateVolume(radii);
                    cout<<"The volume of Sphere with radius "<< radii<< " is "<< volume<<endl << endl;
                    break;}
            case 3: {int x;
                    cout << "Enter 'a': ";
                    cin >> x;
                    cout <<"Enter 'b' :";
                    int y;
                    cin >> y;
                    int z;
                    cout <<"Enter 'c' :";
                    cin >> z;
                    cout << Factorize( x, y,  z);
                    break;}

            default: cout <<"Please Select among 1 , 2 or 3\n\n";
                break;
        }

    return true;
}
