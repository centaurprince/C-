#include<iostream>
using namespace std;

// Function overloading 
/* it means two function with same name but have different task */

int sum (int , int );
int sum (int , int , int );

int main(){
    int a , b , c;
    cout <<"Enter 1st number : "; cin>>a;
    cout <<"Enter 2nd number : ";cin>>b;
    cout <<"Enter 3rd number : ";cin>>c;

    cout<<"addition of number is"<<endl<<endl;

   cout<<sum(a,b)<<endl;
   cout<<sum(a,b,c)<<endl;
    return 0;
}

int sum(int x , int y){
    cout<<"\nsum of 2 arguments is : "<<endl;
    return x+y;
}

int sum(int x , int y , int z){
    cout<<"sum of 3 arguments is : "<<endl;
    return x+y+z;
}