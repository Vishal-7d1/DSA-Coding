#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter Array Size: ";
    cin>>m;

    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Find: ";
    cin>>x;

    bool found = false;

    for(int i=0;i<m;i++){
        if(arr[i] == x){
            cout << x;
            found = true;
            break;
        }
    }

    if(found == false){
        cout << -1;
    }

    return 0;
}