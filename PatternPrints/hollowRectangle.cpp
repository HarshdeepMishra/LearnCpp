#include <iostream>
using namespace std;

void hollowRectangle(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> rows >> cols;
    hollowRectangle(rows, cols);
}