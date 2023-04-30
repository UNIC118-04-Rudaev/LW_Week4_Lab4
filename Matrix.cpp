// #include <iostream>

// using namespace std;

// const int MAX_ROWS = 10;

// void enterMatrix(double[][MAX_ROWS], int);
// void printMatrix(double[][MAX_ROWS], int);
// void addMatrices(double[][MAX_ROWS], int);
// void subtractMatrices(double[][MAX_ROWS], int);
// void multiplyMatrices(double[][MAX_ROWS], int);


// int main1()
// {
//     double matrix[MAX_ROWS][MAX_ROWS] = {0};
//     int choice;

//     do
//     {
//         cout << "1. Enter a matrix" << endl;
//         cout << "2. Print a matrix" << endl;
//         cout << "3. Add two matrices" << endl;
//         cout << "4. Subtract two matrices" << endl;
//         cout << "5. Multiply two matrices" << endl;
//         cout << "6. Quit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             enterMatrix(matrix, MAX_ROWS);
//             break;
//         case 2:
//             printMatrix(matrix, MAX_ROWS);
//             break;
//         case 3:
//             addMatrices(matrix, MAX_ROWS);
//             break;
//         case 4:
//             subtractMatrices(matrix, MAX_ROWS);
//             break;
//         case 5:
//             multiplyMatrices(matrix, MAX_ROWS);
//             break;
//         case 6:
//             cout << "Goodbye!" << endl;
//             break;
//         default:
//             cout << "Invalid choice. Try again." << endl;
//         }
//     } while (choice != 6);

//     return 0;
// }

// void enterMatrix(double matrix[][MAX_ROWS], int maxRows)
// {
//     int rows, cols;

//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     if (rows > maxRows || cols > maxRows)
//     {
//         cout << "Invalid matrix size." << endl;
//         return;
//     }

//     cout << "Enter the matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
// }

// void printMatrix(double matrix[][MAX_ROWS], int maxRows)
// {
//     int rows, cols;

//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     if (rows > maxRows || cols > maxRows)
//     {
//         cout << "Invalid matrix size." << endl;
//         return;
//     }

//     cout << "The matrix is:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void addMatrices(double matrix[][MAX_ROWS], int maxRows)
// {
//     int rows, cols;
//     double matrix2[MAX_ROWS][MAX_ROWS] = {0};

//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     if (rows > maxRows || cols > maxRows)
//     {
//         cout << "Invalid matrix size." << endl;
//         return;
//     }

//     cout << "Enter the first matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "Enter the second matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix2[i][j];
//         }
//     }

//     cout << "The sum of the matrices is:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << matrix[i][j] + matrix2[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void subtractMatrices(double matrix[][MAX_ROWS], int maxRows)
// {
//     int rows, cols;
//     double matrix2[MAX_ROWS][MAX_ROWS] = {0};

//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     if (rows > maxRows || cols > maxRows)
//     {
//         cout << "Invalid matrix size." << endl;
//         return;
//     }

//     cout << "Enter the first matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "Enter the second matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix2[i][j];
//         }
//     }

//     cout << "The difference of the matrices is:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << matrix[i][j] - matrix2[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void multiplyMatrices(double matrix[][MAX_ROWS], int maxRows)
// {
//     int rows, cols;
//     double matrix2[MAX_ROWS][MAX_ROWS] = {0};

//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     if (rows > maxRows || cols > maxRows)
//     {
//         cout << "Invalid matrix size." << endl;
//         return;
//     }

//     cout << "Enter the first matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     cout << "Enter the second matrix:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matrix2[i][j];
//         }
//     }

//     cout << "The product of the matrices is:" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             double sum = 0;
//             for (int k = 0; k < cols; k++)
//             {
//                 sum += matrix[i][k] * matrix2[k][j];
//             }
//             cout << sum << " ";
//         }
//         cout << endl;
//     }
// }