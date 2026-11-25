// find the second smallest element of array
#include<iostream>
#include<climits>//it is a library that drfine the limits of integer values
using namespace std;
int main(){
int arr[5]={23,7,223,70,777};
// initialize first element as smallest
int smallest = arr[0];
//for loop to check every array one by one
for(int i=1;i<5;i++){
    //using if statement to check current element is lesser than smallest element
    if(arr[i]<smallest){
    smallest=arr[i];
}

}
int s_smallest = INT_MAX;// sabse badi value se start
for(int i=0;i<5;i++){
    if(arr[i]<s_smallest && arr[i]>smallest){//chota ho per smallest s bada ho
        s_smallest = arr[i];
    }
}
cout<<s_smallest<<endl;
cout<<smallest;
return 0;
}