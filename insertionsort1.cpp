#include <iostream>
using namespace std;

int main()
{
    int i, j, n, temp, a[20], pass = 0;

    cout << "****INSERTION SORT**** \n";
    cout << "Enter the number of elements:";

    cin >> n;

    cout << "\n Enter the elements \n";

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i <= n - 1; i++)
    {
        temp = a[i];
        j = i - 1;

        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;

        if (temp != a[i])
        {

            cout << "\n Iteration " << i << " : ";

            pass = i + 1;

            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    cout << "\n Insertion Sorted list is as follows \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
