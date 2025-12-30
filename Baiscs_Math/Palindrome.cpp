#include<iostream>
using namespace std;

int main()
{
    int n,org,ans=0,rem;
    cin>>n;
    org=n;
    while(n>0)
    {
        rem=n%10;
        ans=rem+ans*10;
        n=n/10;
    }
    if(ans==org)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }

}