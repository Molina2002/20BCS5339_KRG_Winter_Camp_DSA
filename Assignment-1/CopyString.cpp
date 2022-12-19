#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char S1[20];
    char S2[20] = "World";
    int i = 0;

    while (S2[i] != '\0')
    {
        S1[i] = S2[i];
        i++;
    }
    S1[i] = '\0';
    cout << S1 << endl;
}