#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]!= 0)
        {
          arr[j]=arr[i];
          j++;
        }
      
    }

    
    for(int i=j;i<arr.size();i++){
        arr[i] = 0;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    
}