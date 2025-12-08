#include <iostream>
using namespace std;

void halfDiamondPattern(int n)
{
    for (int i = 1; i<2*n-1; i++)
    {
        for(int j = 1; j<n; j++)
        {
            cout << "*" << endl;
            
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    halfDiamondPattern(n);
}