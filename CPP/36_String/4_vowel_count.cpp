#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    string ch="aeiou";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(ch == s[i]){
        count++;
        }
    }
    cout<<count;
    return 0;
}