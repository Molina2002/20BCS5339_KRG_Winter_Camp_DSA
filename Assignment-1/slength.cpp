#include <iostream>
using namespace std;

int main()
{
    string S = "Hello";
    string M = "World";
    int i = 0;
    while (S[i] != '\0')
    {
        i++;
    }

    cout << "Length:  " << i << endl;
    return 0;
}