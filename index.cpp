#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

    char operations;
    double num1, num2;

    cout<<"Enter 1st number: ";
    cin>>num1;
     cout<<"Enter operations (+, -, *, /): ";
    cin>>operations;
     cout<<"Enter 2nd number: ";
    cin>>num2;

    if(operations == '+'){
        cout<<num1+num2;
    }
    else if (operations == '-'){
        cout<<num1-num2;
    
    }
     else if (operations == '*'){
        cout<<num1*num2;
    
    }
     else if (operations == '/') {
        if (num2 != 0) {
            cout <<  num1 / num2 ;
        } else {
            cout << "Error: Division by zero" << endl;
        }
     }
     
    else {
        cout<<"operator not recognized";
    }

return 0; 

}
