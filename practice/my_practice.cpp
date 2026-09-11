
#include <iostream>
using namespace std;
int main() {

    int n; 
    cin>>n;
    int *arr = new int[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j = 0;
     for(int i=0;i<n;i++){
         if(arr[i]!=0){
             arr[j]=arr[i];
             j++;
         }

    }

 for(int i=j;i<n;i++){
     arr[i]=0;
 }
    
for(int i=0;i<j;i++){
  cout<<arr[i];
 }
    
  delete []arr;
    return 0;
}