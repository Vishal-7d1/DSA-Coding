#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int secondmax=0;
    for(int i=0;i<n;i++){
       if(max<arr[i]){
        secondmax=max;
        max=arr[i];
       }
       else if(arr[i]>secondmax && arr[i]!=max){
        secondmax=arr[i];
       }
    }
    cout<<secondmax;

    return 0;
}
