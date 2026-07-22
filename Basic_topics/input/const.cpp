#include<iostream>
using namespace std;

class const_trial
{  
    public:
    const int a = 10;    // value cannot be changed
    const int b = 20;

    void pointer_to_const()
    {
        const int *p ;
        p = &a;  // value can't ,but the pointer can change
        
        cout<< p <<" ";
        cout<<a<<endl;

        p = &b;
        cout<< p <<"\n";
    }
    
    int x=10;

    void const_pointer()
    {
       int *const p = &x; // pointer cant change
        x=20;
        cout<<p<<" "<<x;

       // a=20; like this cannot assign value
    } 

    void const_to_pointer()
    {
       
    }

};

int main()
{
    const_trial c1;
     c1.pointer_to_const();  
     c1.const_pointer();

     return 0;
}