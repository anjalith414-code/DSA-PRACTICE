//print a table of a number
#include<iostream>
using namespace std;
//making a table function
int Table(int n){
    //start a for loop for i<=10
    for(int i=1;i<=10;i++){
        cout<< n<<"*"<<i<<"="<<n*i<<endl;
    }

}
int main(){
    //calling a function
    Table(7);
    return 0;

}