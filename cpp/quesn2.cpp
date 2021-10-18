// Manas, COE19B003
// Question number: 19
// Language: C++

/* Brief Description of your solution
Program to find Factorial of the given numbers
*/
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;
    cout<<"Enter the number of numbers:";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The factorial of the given numbers are:";
    for(int i = 0; i < n; i++)
    {
        cout<<fact(arr[i])<<" ";
    }
}
