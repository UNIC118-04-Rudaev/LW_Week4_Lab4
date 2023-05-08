/**
 * @file Matrix.h
 * @brief This program performs various operations on matrices.
 * @author Alex Rudaev
*/

const int MAX_ROWS = 10;

#ifndef MATRIX_H
#define MATRIX_H

void enterMatrix(double[][MAX_ROWS], int);
void printMatrix(double[][MAX_ROWS], int);
void addMatrices(double[][MAX_ROWS], int);
void subtractMatrices(double[][MAX_ROWS], int);
void multiplyMatrices(double[][MAX_ROWS], int);
double* sumOfRows(double[][MAX_ROWS], int);
double* sumOfCols(double[][MAX_ROWS], int);

#endif /* MATRIX_H */