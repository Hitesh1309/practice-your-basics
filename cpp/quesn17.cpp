#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter string1: ";
    cin>>str1;
    cout<<"Enter string2: ";
    cin>>str2;
    char c = str1[0];
    int str1_len=0;
    while(c!='\0'){
        str1_len++;
        c=str1[str1_len];
    }
    c = str2[0];
    int str2_len=0;
    while(c!='\0'){
        str2_len++;
        c=str2[str2_len];
    }
    if(str1_len!=str2_len){
        string result = str1_len > str2_len ? str1 : str2;
        cout<<result;
    }
    else{
        cout<<str1<<endl;
        cout<<str2<<endl;
    }
    return 0;
}