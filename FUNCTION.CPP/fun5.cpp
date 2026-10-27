// check whether the number is even,odd,zero
#include<iostream>
using namespace std;
int num(int n){
    if(n%2==0){
        cout<<"even";
    }
    else if(n%2!=0){
        cout<<"odd";
    }
    else{
        cout<<"zero";
    }
}
int main(){
    num(23);
    return 0;
}