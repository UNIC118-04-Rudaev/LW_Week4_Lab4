#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    double matrix[MAX_ROWS][MAX_ROWS] = {0};
    int choice;

    do
    {
        cout << "1. Enter a matrix" << endl;
        cout << "2. Print a matrix" << endl;
        cout << "3. Add two matrices" << endl;
        cout << "4. Subtract two matrices" << endl;
        cout << "5. Multiply two matrices" << endl;
        cout << "6. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            enterMatrix(matrix, MAX_ROWS);
            break;
        case 2:
            printMatrix(matrix, MAX_ROWS);
            break;
        case 3:
            subtractMatrices(matrix, MAX_ROWS);
            break;
        case 4:
            addMatrices(matrix, MAX_ROWS);
            break;
        case 5:
            multiplyMatrices(matrix, MAX_ROWS);
            break;
        case 6:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}