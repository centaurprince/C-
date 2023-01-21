#include<iostream>
using namespace std;

int product(int x , int y){
    static int z =0; // here this statement execfute once
        z=z+2; // this will update the value of 'z'
        return x*y+z;
}

int main(){
    int a ,b;
    cout<<"ENter the values of a and b : ";
    cin>>a>>b;

    for(int i =0;i<a ; i++){
        cout<<"product of a and b : "<<product(a,b)<<endl;;
    }

    return 0;
}