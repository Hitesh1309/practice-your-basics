#include<bits\stdc++.h>
#include<string.h>
using namespace std;

bool check(string s)
{
	bool low_case=false,up_case=false,num=false,spl_char=false;
	for(int i=0;i<strlen(s.c_str());i++)
    {
		if((int)(s[i])>=97 && (int)(s[i])<=122)
        {
			low_case=true;
		}
		if((int)(s[i])>=65 && (int)(s[i])<=90)
        {
			up_case=true;
		}
		if((int)(s[i])>=48 && (int)(s[i])<=57)
        {
			num=true;
		}
		if(s[i]=='@' || s[i]=='#' || s[i]=='$')
        {
			spl_char=true;
		}
	}
	if(low_case && up_case && num && spl_char)
    {
        return true;
    }
	else
    {
        return false;
    }
}
int main()
{
	cout<<"Enter a password\n";
	string st;
	cin>>st;
	if(strlen(st.c_str())<6 || strlen(st.c_str())>12)
    {
        cout<<"Password should be longer than 6 and lesser than 12 characters\n";
    }
	else if(check(st))
    {
		cout<<"Valid Password\n";
	}
	else
    {
		cout<<" Please use atleast 1 small letter between [a-z]\n Atleast 1 capital letter between [A-Z]\n Atleast 1 special character from [#,$,@]\n Atleast 1 integer between [0-9]\n";
	}
    return 0;
}
