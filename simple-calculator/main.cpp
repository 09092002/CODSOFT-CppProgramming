#include <iostream>
using namespace std;

int main(){
    int a, b, output;
    char input;
    cout<<"Lets Get Started\n\n";
    cout<<"Enter Value 1 and Value 2 : \n";
    cin>>a>>b;
    cout<<"Enter the Arithmetic Operation that you want to perform (+, -, /, x) : ";
    cin>>input;
    switch(input){
        case '+': output = a + b; 
        break;
        case '-': output = a - b; 
        break;
        case '/': output = a / b; 
        break;
        case 'x': output = a * b; 
        break;
        default: cout<<"Please select valid Operation";
    }
    cout<<"Output is : "<<output;
    return 0;
}