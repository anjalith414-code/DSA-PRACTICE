//write a program to print a square star pattern consisting of 4 rows and 4 columns
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n=";
    cin>>n;
    //outer loop for rows
    for(int i=1;i<=n;i++){
        //inner loop for columns
        for(int j=1;j<=n;j++){
            //print * for each line
            cout<<"*";
        }
        // move to the next line after each row
        cout<<endl;
    }
    return 0;
    
}