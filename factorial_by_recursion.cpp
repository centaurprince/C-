#include<iostream>
using namespace std;

// calculating factorial of any number using recurrsion

int factorial(int x); 
int fibonacci(int y);

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factorial of number "<< n << " is : "<<factorial(n)<<endl;

    cout<<"Fibonacci number at "<< n <<"th place is "<<fibonacci(n)<<endl;

    return 0;
}

int factorial(int x ){
    if(x == 0 || x == 1 || x<0)
    return 1;
    else {
        return(x * factorial(x-1));
    }
}

int fibonacci(int y ){
    if (y <2){
        return 1;
    }
    else{
        return (fibonacci(y-2) + fibonacci(y-1));
    }
}