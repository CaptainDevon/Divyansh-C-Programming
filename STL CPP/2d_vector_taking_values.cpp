#include <iostream>
#include <vector>

using namespace std; // Add this line to use the std namespace

int main() 
{
    vector<vector<int>> my2DVector;
    int numRows, numCols;

    // Prompt the user for the number of rows and columns in the 2D vector
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;

    // Input loop to fill the 2D vector
    for (int i = 0; i < numRows; ++i) 
    {
        vector<int> row;
        for (int j = 0; j < numCols; ++j) 
        {
            int element;
            cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> element;
            row.push_back(element);
        }
        my2DVector.push_back(row);
    }

    // Display the elements of the 2D vector
    cout << "2D Vector elements:" << endl;
    for (int i = 0; i < numRows; ++i) 
    {
        for (int j = 0; j < numCols; ++j) 
        {
            cout << my2DVector[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
