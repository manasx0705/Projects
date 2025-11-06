#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int a, n;
    bool b=false;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Choose a difficulty level:\n";
    cout << "1. Easy (1 - 10)\n";
    cout << "2. Medium (1 - 50)\n";
    cout << "3. Hard (1 - 100)\n";
    cout << "Enter the number of your difficulty: ";
    cin >> a;

    srand(time(0)); // seed random number generator
    start:
    switch (a) {
        case 1:
            n = rand() % 10 + 1;
            cout << "Random number generated (1-10)\n";
            cout<<"Guess the random number: \n";
            while(!b){ 
            cin>>a;            
            if(a==n){
                cout<<"Congratulations! You won!!";
            }
            else if (a > n - 2 && a < n + 2){
                cout<<"You are very close..Try again..";
            }
            else{
                cout<<"Too far...please try again..";
            }
            
            if(a==n){
                b=true;
            }
            else{
                b=false;
            }
            break;
            }

        case 2:
        while(!b){
            n = rand() % 50 + 1;
            cout << "Random number generated (1-50)\n";
            cout<<"Guess the random number: \n";
            cin>>a;
            if(a==n){
                cout<<"Congratulations! You won!!";
            }
            else if (a > n - 5 && a < n + 5){
                cout<<"You are very close..Try again..";
            }
            else{
                cout<<"Too far...please try again..";
            }

            if(a==n){
                b=true;
            }
            else{
                b=false;
            }
        }
            break;

        case 3:
        while(!b){
            n = rand() % 100 + 1;
            cout << "Random number generated (1-100)\n";
            cout<<"Guess the random number: \n";
            cin>>a;
            if(a==n){
                cout<<"Congratulations! You won!!";
            }
            else if (a > n - 2 && a < n + 2){
                cout<<"You are very close..Try again..";
            }
            else{
                cout<<"Too far...please try again..";
            }


            if(a==n){
                b=true;
            }
            else{
                b=false;
            }
            break;
        }
        default:
            cout << "Enter a valid response!\n";
            goto start;
            return 0;
        }
    return 0;
}


