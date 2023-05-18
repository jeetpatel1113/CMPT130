#include <iostream>
#include <ctime>
using namespace std;
bool isFoundinRow(int **A, const int col_index,  const int row, const int x)
{
	for (int i = 0 ; i < row ; i++)
		if(A[i][col_index] == x)
			return true;
	return false;
}
bool isFoundinCol(int **A, const int row_index, const int col, const int x)
{
	for (int j = 0 ; j < col ; j++)
		if(A[row_index][j] == x)
			return true;
	return false;
}
bool isLegal(int **A, const int row, const int col, const int x, int &row_index, int &col_index)
{
	
	if(isFoundinRow(A, col_index, row_index, x)) //arranges the column ||
	{
		if (col_index > 7)
			col_index = 0;
		col_index--;
		return false;
	}
	
	if(isFoundinCol(A, row_index, col_index, x)) //arranges the row =
	{
		if (col_index > 7)
			col_index = 0;
		col_index--;
		return false;
	}
	
	return true;
}
/*
void generateRandomArray(int *A, const int size)
{
	//Pre-condition: Takes size and array location and populate numbers all 0-9 in random order
	for (int i = 0 ; i < size ; i++)
	{
		int x = rand() % (9-1+1) + 1;
		if (isFound(A, x, size))
			i = i - 1;
		else
			A[i] = x;
	}
	return;
}
*/
void generateBoard(int **A , int row, int col)
{
	for (int i = 0 ; i < row ; i++)
		A[i] = new int[col];
	return;
}
void deleteBoard(int **A , int row, int col)
{
	for (int i = 0 ; i < row ; i++)
		delete[] A[i];
	delete[] A;
}
void printBoard(int **A, const int row, const int col)
{
	for (int i = 0 ; i < row ; i++)
	{
		for (int j = 0 ; j < col ; j++)
			cout << A[i][j] << "  ";
		cout << endl;
	}
	cout << endl;
	return;
}
void populateRandomMatrix(int **A, const int row, const int col)
{
	for (int i = 0 ; i < row ; i++)
	{
		for (int j = 0 ; j < col ; j++)
		{
			int x = rand() % (9-1+1) + 1;
			if (isLegal(A, row, col, x, i, j))
			{
				A[i][j] = x;
				cout << A[i][j];
			}
		}
		cout << endl;
	}
	return;
}
int main()
{
	srand(time(0));
	const int row = 9, col = 9;
	int **Board = new int *[row];
	generateBoard(Board, row, col);
	populateRandomMatrix(Board, row, col);
	printBoard(Board, row, col);
	deleteBoard(Board, row, col);
	cout << "Board deleted" << endl;
	system ("Pause");
	return 0;
}