#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int largest;
  int n;
  cin >> n;

  // int arr[n]; it will gives error because static array size must known at compile time not at run time

  // For Dynamic memory allocation
  int *arr = new int[n];
  int count = 0;
  int secondLargest;
  secondLargest = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  largest = arr[0];

  for (int i = 0; i < n; i++)
  {

    if (arr[i] > largest)
    {
      secondLargest = largest;
      largest = arr[i];
      
    }

    else if (arr[i] < largest && arr[i] > secondLargest)
    {
      secondLargest = arr[i];
    }
    
  }

  cout<<largest;
// if the values are repeated multiple the secondlargest remain same as INT_MIN,then we print -1
 if (secondLargest==INT_MIN)
    {
      cout<< "-1"<<" ";
    }
    //se kept in else,because generally upto now the secondLargest is printing as separately because of above loop inside conditions after we must print secondlargest right 
    else{
       cout << secondLargest;
    }
  delete[] arr; // free the memory of array
  return 0;
}