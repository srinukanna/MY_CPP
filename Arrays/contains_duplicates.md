```
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    
    vector <int> v;
    
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(v[i]==v[j]){
                    cout<<"true";
                 return 0;
                }
          
            }
    }
    cout<<"false";
    
return 0;
    
}
```