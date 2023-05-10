/**
 * @file Matrix.cpp
 * @brief This program performs various operations on matrices.
 * @author Alex Rudaev
*/
#include "Matrix.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <cassert>

using namespace std;

/**
 * Function enterMatrix prompts the user to enter a matrix.
 * @param matrix the matrix to enter
 * @param maxRows the maximum number of rows
 * @return void
*/
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

/**
 * Function printMatrix prints a matrix.
 * @param matrix the matrix to print
 * @param maxRows the maximum number of rows
 * @return void
*/
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

/**
 * Function addMatrices adds two matrices.
 * @param matrix the first matrix to add
 * @param maxRows the maximum number of rows
 * @return void
*/
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

/**
 * Function subtractMatrices subtracts two matrices.
 * @param matrix the first matrix to subtract
 * @param maxRows the maximum number of rows in the matrix
 * @return void
*/
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

/**
 * Function multiplyMatrices multiplies two matrices.
 * @param matrix the first matrix to multiply
 * @param maxRows the maximum number of rows in the matrix
 * @return void
*/
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

/**
 * Function sumOfRows calculates the sum of each row in the matrix.
 * @param matrix the matrix to calculate the sum of each row
 * @param maxRows the maximum number of rows in the matrix
 * @return the sum of each row in the matrix
*/
double* sumOfRows(double matrix[][MAX_ROWS], int maxRows)
{
    int rows, cols;
    double* sum = new double[MAX_ROWS];

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > maxRows || cols > maxRows)
    {
        cout << "Invalid matrix size." << endl;
        return sum;
    }

    cout << "Enter the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
            sum[i] += matrix[i][j];
        }
    }

    return sum;
}

/**
 * Function sumOfCols calculates the sum of each column in the matrix.
 * @param matrix the matrix to be summed
 * @param maxRows the maximum number of rows in the matrix
 * @return the sum of each column in the matrix
*/
double* sumOfCols(double matrix[][MAX_ROWS], int maxRows)
{
    int rows, cols;
    double* sum = new double[MAX_ROWS];

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > maxRows || cols > maxRows)
    {
        cout << "Invalid matrix size." << endl;
        return sum;
    }

    cout << "Enter the matrix:" << endl;
    for (int i = 0; i < cols; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < rows; j++)
        {
            cin >> matrix[j][i];
            sum[i] += matrix[j][i];
        }
    }

    return sum;
}

/**
 * Function fillWithRandomNum fills the matrix with random numbers.
 * @param matrix the matrix to be filled
 * @param maxRows the maximum number of rows
 * @return none
*/
void fillWithRandomNum(double matrix[][MAX_ROWS], int maxRows)
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

    srand(time(NULL));
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << endl;
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << " ";
        }
    }
    cout << endl;
}

/**
 * Function partition splits the array into two half, around the pivot value.
 * @param nums The array that contain the numbers
 * @param left The left index
 * @param right The right index
 * @return The index of the pivot
*/
int partition(long nums[], int* left, int* right){
    int i = *left, j = *right;
    long tmp;
    long pivot = nums[(*left + *right) / 2];

    // partition
    while (i <= j) {
        while (nums[i] < pivot)
            ++i;
        while (nums[j] > pivot)
            --j;
        if (i <= j) {
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            ++i;
            --j;
        }
    }
    return i;
}

/**
 * Function quickSort sorts the values in the matrix
 * @param matrix The matrix that contain the numbers
 * @param left The left index
 * @param right The right index
 * @return none
*/
void quickSort(long nums[], int* left, int* right){
    assert(*left >= 0 && *right > *left);

    int idx = partition(nums, left, right);

    // recursion
    if (*left < idx - 1)
        quickSort(nums, left, &idx - 1);
    if (idx < *right)
        quickSort(nums, &idx, right);
}
