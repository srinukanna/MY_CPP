#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int * arr = new int [n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int j = 0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
            
        }
    }
    
    for(int i=0;i<j+1;i++){
        cout<<arr[i];
    }
    delete []arr;
 return 0;
}