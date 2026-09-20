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
  
   int cheapest = v[0];
   int currentprofit ;
   int maxprofit = 0;
  
    for(int i=0;i<v.size();i++){
          int todayPrice = v[i];
            if(v[i]< cheapest){
                cheapest = v[i];
            }
            currentprofit = todayPrice - cheapest;
           
            if(currentprofit > maxprofit){
                maxprofit = currentprofit;
            }
        }
    

   cout<<maxprofit;
   return 0;
}