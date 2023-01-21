#include<iostream>
using namespace std;

void sum(int *x , int *y){
    int p = *x + *y;
    cout<< p;
}

//call by reference
void square(int *k ){
    int m = *k * *k;
    cout<<m;
}

// call by value
void mul(int &x , int &y){
    int l = x * y;
    cout<<l;
}

void swap(int &x , int &y){
    int temp = x;
        x = y;
    y = temp;

    cout<<x;
    cout<<" "<<y;
}
int main(){
    int a =10;
    int b = 20;

    int *c = &a;
    int *d = &b;

    // cout<<"sum of two number is "<<sum(c, d)<<endl; //here send address
    // cout<<"square of a number is "<<square(c); // here we only adress 
    // mul(*c, *d); // here we send values through  address 

    cout<<"\nsum of two numbers is ";
    sum(c,d);
    cout<<"\nsquare of two numbers is ";
    square(c);
    cout<<"\nmultiplication of two numbers is ";
    mul(*c,*d);

    cout<<"\nnumber before swaping "<<endl<< a <<" "<<b;
    cout<<"\nnumbers after swaping "<<endl;
    swap(*c,*d);

    return 0;
}
