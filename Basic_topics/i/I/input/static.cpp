//static

/*

 lifetime : Entire program
 memory allocation:once
 Default value:0
 Storage:Data segment
 Scope:Depends on where declared

 static data members:
    shared by all objects,only one copy and accessed using class name

  static Global variable:
    only inside the file and provides internal linkage

  static initialization:
    void fun()
      { 
        static int x = compute();
      }
       initialized only once and thread safe
*/

#include<iostream>
using namespace std;

class static_trial
{
   public:

   void static_fun()
    {
       static int a=10; // static and block scope
    }

   static int g=20; // static global variable

   static int a1; // non-const static data member must be initialized out of line or class
};

  int static_trial::a1=20;// must be initialized outside the class and a type specifier is required for all declarations
  int static_trial::g=20;

int main()
{
   static_trial s1,s2;
   cout<<s1.a1<<s1.g;

   s2.a1=5;
   cout<<s2.a1;
}