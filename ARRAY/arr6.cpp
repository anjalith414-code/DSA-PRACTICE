// find the second largest element of array
#include<iostream>
#include<climits>//it is a library that drfine the limits of integer values
using namespace std;
int main(){
int arr[5]={23,7,223,70,777};
// initialize first element as largest
int largest = arr[0];
//for loop to check every array one by one
for(int i=1;i<5;i++){
    //using if statement to check current element is greater than largest element
    if(arr[i]>largest){
    largest=arr[i];
}

}
int s_largest = INT_MAX;// sabse badi value s start
for(int i=0;i<5;i++){
    if(arr[i]>s_largest && arr[i]<largest){//bada ho per largest s chota ho
        s_largest = arr[i];
    }
}
cout<<s_largest<<endl;
cout<<largest;
return 0;
}