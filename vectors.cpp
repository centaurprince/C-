#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;    //declaration of vector
    v.push_back(1); // assign values in vector
    v.push_back(2);
    v.push_back(3);

    // to print elemets of vector
    //method 1

    for(int i =0 ; i < v.size(); i++){
        cout<<v[i];
    }

    //method 2
    vector<int> :: iterator it ;
    for(it = v.begin(); it<v.end() ; it++){
        cout<<*it << endl; // iterator is a pointer 
    }

    //method 3

    //auto keyword take automatically valid data type
    for(auto element : v){
        cout<< element <<endl;
    }  






    //pop back function
    v.pop_back();
    vector<int> v2(3,59);

    swap(v, v2);
    for(auto element :v){
        cout<<element <<endl;
    }
    for(auto element : v2){
        cout<<element <<endl;
    }






    //sorting
    sort (v.begin(), v.end());
    return 0;
}