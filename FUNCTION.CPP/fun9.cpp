#include<iostream>
using namespace std;
//function with two parameters
void test(int*x,int y){
    // change value at address(modifies origibal'a')
    *x+=5;
    // change local copy (does NOT modify 'b')
    y*=2;
    cout<<*x<<y;
}
int main()
{ 
    int a=3;int b=4;
    // pass address of a,and value b
    test(&a,b);
     cout<<a<<b;
    return 0;
}