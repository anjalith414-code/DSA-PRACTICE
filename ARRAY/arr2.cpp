// find the smallest element of array
#include<iostream>
using namespace std;
int main(){
int arr[5]={23,7,223,70,777};
// initialize first element as smallest
int smallest = arr[0];
//for loop to check every array one by one
for(int i=1;i<5;i++){
    //using if statement to check current element is smaller than smaller element
    if(arr[i]<smallest){
    smallest=arr[i];
}

}
//print largest
cout<<"smallest="<<smallest;
return 0;
}
