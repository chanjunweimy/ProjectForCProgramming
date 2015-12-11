// Matrix.cpp

#include "Matrix.h"

const string Matrix::OP_ROTATE = "Rotate";
const string Matrix::OP_REFLECT = "Reflect";
const string Matrix::DIR_X = "x";
const string Matrix::DIR_Y = "y";

Matrix::Matrix(int size)
{
	this->size = size;
}

void Matrix::rotate(int degree, int input[MAX_SIZE][MAX_SIZE])
{
	// Rotate 90 deg at a time
	while (degree > 0)
	{
		for (int i=0; i<this->size; i++)
		{
			for (int j=0; j<this->size; j++)
			{
				this->temp[j][this->size-1-i] = input[i][j];
			}
		}
		degree -= 90;
	}
	this->copyTempToInput(input);
}

void Matrix::reflectX(int input[MAX_SIZE][MAX_SIZE])
{
	for (int i=0; i<this->size; i++)
	{
		for (int j=0; j<this->size; j++)
		{
			this->temp[i][j] = input[this->size-1-i][j];
		}
	}
	
	this->copyTempToInput(input);
}

void Matrix::reflectY(int input[MAX_SIZE][MAX_SIZE])
{
	for (int i=0; i<this->size; i++)
	{
		for (int j=0; j<this->size; j++)
		{
			this->temp[i][j] = input[i][this->size-1-j];
		}
	}
	this->copyTempToInput(input);
}

void Matrix::operate(string operation, string type, int input[MAX_SIZE][MAX_SIZE])
{
	if (operation == OP_ROTATE) {
		this->rotate(atoi(type.c_str()), input);
	}
	else if (operation == OP_REFLECT)
	{
		if (type == DIR_X)
		{
			this->reflectX(input);
		}
		else if (type == DIR_Y)
		{
			this->reflectY(input);
		}
	}
}

void Matrix::copyTempToInput(int input[MAX_SIZE][MAX_SIZE])
{
	int i, j;
	for (i=0; i<this->size; i++)
	{
		for (j=0; j<this->size; j++)
		{
			input[i][j] = this->temp[i][j];
		}
	}
}
