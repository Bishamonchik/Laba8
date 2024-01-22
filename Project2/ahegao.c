#include <stdio.h> 
#include <conio.h> 
#include<locale.h>
#define M 3
#define N 5

void main()
{
	/*Составьте программу вычисления максимального элемента 
	второй строки матрицы А(M, N) и его индексов.*/
	setlocale(LC_ALL, "Russian");
	float b;
	float A[M][N];
	int i,j;
	int z = 0;
	
	for (i = 0; i < M; i++)// построчный ввод
	{
		printf("\nВведите элементы % d строки\n", i);
		for (j = 0; j < N; j++)
			scanf_s("%f", &A[i][j]);
	}

	b = A[1][0];
	for (int j = 0; j < N; j++)
		if (b < A[1][j]) 
		{
	b = A[1][j];
	z = j;
		}
	


	
	printf("Максимальный элемент второй строки: %.f \n", b);
	printf("Индексы этого элемента: строка 1, столбец %d\n", z);

	/*Составьте программу обмена первого и 
	последнего элементов главной диагонали матрицы В (N, N).*/

	/*int z;
	int B[N][N] =
	{
		{1, 2, 3, 4, 5},
		{3, 4, 5, 6, 7},
		{5, 6, 7, 8, 9},
		{3, 4, 5, 6, 7},
		{5, 6, 7, 8, 9}
	};
	
	z = B[0][0];
	B[0][0] = B[N-1][N-1];
	B[N - 1][N - 1] = z;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}*/



	/*Составьте программу упорядочения элементов по возрастанию матрицы A (N, N).*/
	/*int z = 0;
	int r = 0; 
	int b = 0;
	int A[N][N] =
	{
		{1, 2, 20, 14, 22},
		{6, 7, 11, 12, 10},
		{13, 4, 16, 21, 3},
		{9, 15, 19, 18, 5},
		{24, 17, 25, 8, 23}
	};
	int A1[N][N] = { 0 };

	for (int a = 0; a < N*N; a++)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (z < A[i][j])
				{
					z = A[i][j];
					r = i; 
					b = j;
				}
			}
		}
		A[r][b] = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (A1[N - i - 1][N - j - 1] == 0) 
				{
					A1[N - i - 1][N - j - 1] = z;
					z = 0;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", A1[i][j]);
		}
		printf("\n");
	}


*/



	_getch();
}
	
