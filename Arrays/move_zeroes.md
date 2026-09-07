
```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        arr.push_back(value);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    

}
```
### Brute force approach:
```
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    while (temp.size() < n)
    {
        temp.push_back(0);
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i];
    }
}
```