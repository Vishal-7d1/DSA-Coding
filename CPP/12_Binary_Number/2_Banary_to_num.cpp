#include<iostream>
using namespace std;

int main(){
      int num;
    cout <<"Enter Number :";
    cin>> num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%10;
        num=num/10;
        ans=mul*rem+ans;
        mul*=2;
       
    }
     cout<<ans<<endl;
}