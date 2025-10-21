#include <iostream>
using namespace std;

void solidRectangle(int n)
{
    for(int i = 1; i<n; i++)
    {
        for(int j = 1; j<n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number: "<< endl;
    cin >> n;
    solidRectangle(n);
    return 0;
}