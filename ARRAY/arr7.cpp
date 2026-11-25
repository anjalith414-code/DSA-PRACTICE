// check if array is sorted
#include<iostream>
using namespace std;
int main(){
int arr[5]={23,7,223,70,777};
int n=5;
bool sorted = true;
for(int i=0;i<n-1;i++){

    if(arr[i]>arr[i+1]){
        sorted = false;
        break;
    }
    }
if(sorted==true){
    cout<<"array is sorted";
}
else{
    cout<<"array is not sorted";
}
return 0;
}
