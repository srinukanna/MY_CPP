#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
        if(i%2==0)
        {
            cout<<arr[i];
        }
    }
   return 0; 
}