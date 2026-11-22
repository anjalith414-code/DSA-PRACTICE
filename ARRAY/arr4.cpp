// sort aaray in descending order
#include<iostream>
using namespace std;
int main(){
int arr[5]={50,20,40,30,10};
for(int i =0;i<5;i++){
    int maxindex=i;
    for(int j=i+1;j<5;j++){
        if(arr[j]<arr[maxindex])
        {
            maxindex=j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[maxindex];
    arr[maxindex]=temp;
}
cout<<"descending order=";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}