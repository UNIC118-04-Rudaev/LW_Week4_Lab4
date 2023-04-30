/**
 * @file LW_Week2_Lab1.cpp
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

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cassert>
#include "Shapes.h"
using std::cout;
using std::cin;

/**
 * @brief The maximum size of the arrays.
*/
const int MAX_ARRAY = 10;

int main()
{
	return 0;
}

/**
 * @brief Draws a horizontal line of a given length and character
 * @param length The length of the line
 * @param ch The character used to draw the line
 */
void drawHorizontalLine(const int length, const char ch)
{
	assert (length > 1);
	for (int i = 0; i < length; i++)
	{
		cout << ch;
	}
}

/**
 * @brief Draws a vertical line of a given height and character
 * @param height The height of the line
 * @param ch The character used to draw the line
 */
void drawVerticalLine(const int height, const char ch)
{
	assert (height > 1);
	for (int i = 0; i < height; i++)
	{
		cout << ch << "\n";
	}
}

/**
 * @brief Draws a vertical line of a given height and width and character
 * @param height The height of the line
 * @param width The width of the line
 * @param ch The character used to draw the line
 */
void drawVerticalLine(const int height, const int width,const char ch)
{
	assert (width > 1);
	for (int i = 0; i < height; i++)
	{
		cout << ch;
		drawHorizontalLine(width - 2, ' ');
		cout << ch << "\n";
	}
}

/**
 * @brief Draws a square of a given size and character
 * @param size The size of the square
 * @param ch The character used to draw the square
 */
void drawSquare(const int size, const char ch)
{
	assert (size > 0);
	drawHorizontalLine(size, ch);
	cout << "\n";
	drawVerticalLine(size - 2, size, ch);
	drawHorizontalLine(size, ch);
}

/**
 * @brief Draws a rectangle of a given height and length and character
 * @param height The height of the rectangle
 * @param length The length of the rectangle
 * @param ch The character used to draw the rectangle
 */
void drawRectangle(const int height, const int length, const char ch)
{
	assert (height > 1 && length > 1);
	drawHorizontalLine(length, ch);
	cout << "\n";
	drawVerticalLine(height - 2, length, ch);
	drawHorizontalLine(length, ch);
}

/**
 * @brief This function initializes three arrays with random values.
 * @param shapeTy[] An integer array containing the type of shapes.
 * @param shapeLen[] An integer array containing the length of shapes.
 * @param shapeCh[] A character array containing the character used for shapes.
 * @param size An integer representing the size of the arrays.
 */
void initializeArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int size)
{
	assert (size <= MAX_ARRAY);
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		shapeTy[i] = rand() % 4 + 1;
		shapeLen[i] = rand() % 10 + 1;
		shapeCh[i] = rand() % 26 + 65;
		assert (shapeTy[i] >= 1 && shapeTy[i] <= 4);
		assert (shapeLen[i] >= 1 && shapeLen[i] <= 10);
		assert (shapeCh[i] >= 65 && shapeCh[i] <= 90);
	}
}

/**
 * @brief This function draws shapes based on the values in three arrays.
 * @param shapeTy[] An integer array containing the type of shapes.
 * @param shapeLen[] An integer array containing the length of shapes.
 * @param shapeCh[] A character array containing the character used for shapes.
 * @param size An integer representing the size of the arrays.
 */
void drawShapes(const int shapeTy[], const int shapeLen[], const char shapeCh[], const int size)
{
	assert (size <= MAX_ARRAY);
	for (int i = 0; i < size; i++)
	{
		switch (shapeTy[i])
		{
		case 1:
			drawHorizontalLine(shapeLen[i], shapeCh[i]);
			break;
		case 2:
			drawVerticalLine(shapeLen[i], shapeCh[i]);
			break;
		case 3:
			drawSquare(shapeLen[i], shapeCh[i]);
			break;
		case 4:
			drawRectangle(shapeLen[i], shapeLen[size-i], shapeCh[i]);
			break;
		default:
			break;
		}
		cout << "\n\n";
	}
}