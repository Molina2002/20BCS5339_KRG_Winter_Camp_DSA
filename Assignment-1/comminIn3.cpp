#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int b[] = {4, 5, 6, 7, 8, 9};
    int c[] = {4, 5, 6, 10, 11};
    int i = 0, j = 0, k = 0;
    int m = 5, n = 6, o = 5;
    while (i < m && j < n && k < o)
    {

        if (a[i] == b[j] && b[j] == c[k])
        {
            cout << a[i] << " ";
            i++, j++, k++;
        }
        else if (a[i] <= b[j] && a[i] <= c[k])
        {
            i++;
        }
        else if (b[j] <= a[i] && b[j] <= c[k])
        {
            j++;
        }
        else
        {

            k++;
        }
    }
}