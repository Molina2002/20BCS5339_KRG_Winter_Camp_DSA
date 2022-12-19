#include <iostream>
using namespace std;
int main()
{
    char a[7] = "Molina";
    int n = 6;
    int end = n - 1;
    for (int i = 0; i < (n / 2); i++)
    {
        swap(a[i], a[end - i]);
    }
    cout << a << endl;
}