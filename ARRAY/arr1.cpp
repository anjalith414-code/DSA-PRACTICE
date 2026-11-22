// find the largest element of array
#include<iostream>
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
//print largest
cout<<"largest="<<largest;
return 0;
}
