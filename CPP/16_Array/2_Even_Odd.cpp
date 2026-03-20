#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
       cout<<"Odd: "<<oddcount<<endl;
        cout<<"Even: "<<evencount<<endl;
return 0;
}