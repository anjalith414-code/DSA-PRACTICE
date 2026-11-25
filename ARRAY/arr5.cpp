// find the largest element of array
#include<iostream>
using namespace std;
int main(){
int arr[5];
cout<<"enter 5 elements=";
for(int i=0;i<5;i++){
    cin>>arr[i];
}

for(int i=4;i>=0;i--){
    cout<<arr[i]<<" ";
}
return 0;
}

