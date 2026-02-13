#include<iostream>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int add(int a,int b,int c){
    int sum=a+b+c;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}