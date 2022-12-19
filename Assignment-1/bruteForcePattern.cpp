#include <iostream>
using namespace std;
int main()
{
    char a[7] = "Molina";
    char text[10] = "lina";
    int n = 6;
    int m = 4;
    int count = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < m)
        {

            if (a[i] == text[j])
            {

                count++;
                j++;
            }
            else
            {

                break;
            }
        }
    }
    if (count == 4)
    {
        cout << "String found" << endl;
    }
    else
        cout << "String not found" << endl;
}