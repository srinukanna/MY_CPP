#include<iostream>
using namespace std;

class rotation
{
    public:
      int arr[100],n,i;
      cin>>n;

      int k;
      cin>>k;

     void right_rotation()
      {
       for(int i=0;i<n;i++)
       {
        cin>>arr[i];
       }

       for(int j=0;j<n;j++)
       {
        int i=0;
        if(k!=0)
        {
          arr[j++]=arr[n-k];
          k--;
        }
        
       }
    }

};

int main()
{
  rotation r;
  r.right_rotation();
}