//write a program to print right angle triangle pattern consisting of 4 rows and 4 columns
#include<iostream>
using namespace std;
void pattern(int n){
    //outer loop for rows
    for(int i=1;i<=n;i++){
        //inner loop for columns
        for(int j=1;j<=i;j++){
            //print j for each line
            cout<<j;
        }
        // move to the next line after each row
        cout<<endl;
    }
}
int main(){
    //number of test cases
    int t;
    cout<<"t=";
    cin>>t;
    //loop runs accordin to test cases
    for(int i=0;i<t;i++){
        // take input for pattern size
        int n;
        cout<<"n=";
        cin>>n;
        // call pATTERN FUNCTION
        pattern(n);
    }
    return 0;
}