#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v;
    unordered_set <int> seen;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }

    for(int i=0;i<v.size();i++){
    
        if(seen.find(v[i])!=seen.end()){
        cout<<"Duplicate found";
        return 0;
    }
    seen.insert(v[i]);
}

for(int x : seen){
        cout<<x;
}

  return 0;
}