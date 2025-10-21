#include <iostream>
using namespace std;

void solidRectangle(int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int rows, columns;
    cout << "Enter number of rows and columns for rectangle: ";
    cin >> rows >> columns;
    solidRectangle(rows, columns);
}