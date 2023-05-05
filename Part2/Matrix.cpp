#include "Matrix.h"
#include <iostream>

using namespace std;

void enterMatrix(double matrix[][MAX_ROWS], int maxRows)
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > maxRows || cols > maxRows)
    {
        cout << "Invalid matrix size." << endl;
        return;
    }

    cout << "Enter the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(double matrix[][MAX_ROWS], int maxRows)
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > maxRows || cols > maxRows)
    {
        cout << "Invalid matrix size." << endl;
        return;
    }

    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(double matrix[][MAX_ROWS], int maxRows)
{
    int rows, cols;
    double matrix2[MAX_ROWS][MAX_ROWS] = {0};

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > maxRows || cols > maxRows)
    {
        cout << "Invalid matrix size." << endl;
        return;
    }

    cout << "Enter the first matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the second matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout << "The sum of the matrices is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }
}

void subtractMatrices(double matrix[][MAX_ROWS], int maxRows)
{
    int rows, cols;
    double matrix2[MAX_ROWS][MAX_ROWS] = {0};

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > maxRows || cols > maxRows)
    {
        cout << "Invalid matrix size." << endl;
        return;
    }

    cout << "Enter the first matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the second matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout << "The difference of the matrices is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] - matrix2[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrices(double matrix[][MAX_ROWS], int maxRows)
{
    int rows, cols;
    double matrix2[MAX_ROWS][MAX_ROWS] = {0};

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > maxRows || cols > maxRows)
    {
        cout << "Invalid matrix size." << endl;
        return;
    }

    cout << "Enter the first matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the second matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout << "The product of the matrices is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            double sum = 0;
            for (int k = 0; k < cols; k++)
            {
                sum += matrix[i][k] * matrix2[k][j];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}