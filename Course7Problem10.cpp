#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

short SumOfMatrixElements(short Arr[3][3] ,  short Rows, short Cols)
{
	short Sum = 0;

	for (short i = 0 ; i < Rows ; i++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}

int main()
{

	srand((unsigned)time(NULL));

	short Arr[3][3];

	FillMatrix(Arr, 3, 3);
	cout << "\nMatris :\n";
	PrintMatrix(Arr, 3, 3);

	cout << "\nSum = " << SumOfMatrixElements(Arr, 3, 3) << "\n";

	

	

}