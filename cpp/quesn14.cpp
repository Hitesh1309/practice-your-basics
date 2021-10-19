#include <bits/stdc++.h>
using namespace std;

string int_to_str(int n){
    string str;
    int r;
    bool ispos=false,isneg=false;
    if(n==0) return "0";
    else if(n<0){
        isneg = true;
        n = abs(n);
    } 
    while(n>0){
        r = n%10;
        n = n/10;
        switch (r)
        {
        case 0:
            str.insert(0,1,'0');
            break;
        case 1:
            str.insert(0,1,'1');
            break;
        case 2:
            str.insert(0,1,'2');
            break;
        case 3:
            str.insert(0,1,'3');
            break;
        case 4:
            str.insert(0,1,'4');
            break;
        case 5:
            str.insert(0,1,'5');
            break;
        case 6:
            str.insert(0,1,'6');
            break;
        case 7:
            str.insert(0,1,'7');
            break;
        case 8:
            str.insert(0,1,'8');
            break;
        case 9:
            str.insert(0,1,'9');
            break;
        default:
            break;
        }
    }
    if(isneg) str.insert(0,1,'-');
    return str;
}

int main(){
    int n;
    cout<<"Enter the integer: ";
    cin>>n;
    string converted_str = int_to_str(n);
    cout<<converted_str;
    return 0;
}