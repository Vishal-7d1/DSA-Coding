#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter Number :";
    cin>> num;
    int rem,ans=0,i=0;
    while(num>0){
        rem=num%2;
        num=num/2;
        ans=rem*1^i+ans;
        cout<<ans<<" ";
    }

}
 