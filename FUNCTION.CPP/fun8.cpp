#include<iostream>
using namespace std;
//function with two parameters
int sum(int &a,int b){
//a ki value m 5 add hoga
a+=5;
// b ki value m 2 add hoga
b*=2;
cout<<a<<b;
}
int main(){
    //initial value of x is 10
    int x=10;
    // initial value pf y is 20
    int y=20;
    // pass x and y in a function
    sum(x,y);
    // afterfunction  x and y are print
    cout<<x<<y;
    return 0;
}
