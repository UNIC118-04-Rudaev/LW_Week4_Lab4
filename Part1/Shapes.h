/**
 * @file Shapes.h
 * @brief This file contains functions for drawing various shapes using ASCII characters.
 * The shapes that can be drawn include horizontal lines, vertical lines, squares,
 * and rectangles. There are also functions for initializing arrays of shapes and
 * for drawing shapes based on arrays of shape types, lengths, and characters.
 * @note These functions assume that the console supports ASCII characters and that the
 * dimensions provided for the shapes are within the boundaries of the console window.
 *
 * @author Alex Rudaev
 * @see drawHorizontalLine()
 * @see drawVerticalLine(int, char)
 * @see drawVerticalLine(int, int, char)
 * @see drawSquare()
 * @see drawRectangle()
 * @see initializeArrays(int[], int[], char[], int)
 * @see drawShapes(int[], int[], char[], int)
 */
#ifndef SHAPES_H
#define SHAPES_H

void drawHorizontalLine(const int length, const char ch);
void drawVerticalLine(const int height, const char ch);
void drawVerticalLine(const int height, const int width, const char ch);
void drawSquare(const int size, const char ch);
void drawRectangle(const int height, const int length, const char ch);
void initializeArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int size);
void drawShapes(const int shapeTy[], const int shapeLen[], const char shapeCh[], const int size);

#endif /* SHAPES_H */