#include <iostream>
using namespace std;
int main()
{
    int temp[100], arr[100];
    int n, i = 0, j;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];

        for (j = i + 1; j < n; j++)
        {
            if (temp[i] <= arr[j])
            {
                break;
            }
        }

        if (j == n)
        {
            cout << temp[i] << " " << "It is a leader" << endl;
        }
    }

    return 0;
}
