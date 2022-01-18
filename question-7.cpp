#include<iostream>
using namespace std;

int main()
{
    int i, j;
    for(i = 1;i <= 20; i++)
    {
        for(j = 1;j <= i && i % 3 == 0; j++)
        {
            cout << "X";
        }
        cout << "\n";
    }
}
