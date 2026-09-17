// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    // Write C++ code here
   vector <int> v;
    for(int i =0;i<6;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    // for(int i =0;i<6;i++){
    //     cout<<v[i]<<" ";
    // }
   
   int currentprofit ;
   int maxprofit = INT_MIN;

    for(int i=0;i<v.size();i++){

        for(int j=i+1;j<v.size();j++){
             currentprofit = v[j]-v[i];
            if(currentprofit > maxprofit){
                maxprofit = currentprofit;
            }
        }
    }

   cout<<maxprofit;
    
    

    return 0;
}