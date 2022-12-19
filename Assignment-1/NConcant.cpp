#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char S1[20] = "Molina";
    char S2[20] = "Mukherjee";

    int n = 5;
    int i = 0, j = 0;

    while (S1[i] != '\0')
    {

        i++;
    }
    for (int j = 0; j < n; j++, i++)
    {

        S1[i] = S2[j];
    }
    S1[i] = '\0';
    cout << S1 << endl;
}