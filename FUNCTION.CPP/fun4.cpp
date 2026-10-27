// check whether a number is even or odd
#include<iostream>
using namespace std;
//making a fuction
int evenodd(int n){
    //check number is even or odd
    if(n%2==0){
        //if number is even
        cout<<"even";

    }
    else{
        // if number is odd
        cout<<"odd";

    }
}
int main(){
    // calling a function
    evenodd(7);
    return 0;
}