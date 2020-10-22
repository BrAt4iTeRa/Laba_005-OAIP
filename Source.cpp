#include <stdio.h>
#include <locale.h>
#define n 2
#define m 10
int main() {
	setlocale(LC_ALL, "Russian");
	int mt[n][m],i,j,k, zam = 0;
	printf_s("Вводите элементы матрицы:");
	for ( i=0;i<n;i++)
		for ( j = 0; j < m; j++) {
			printf_s("\nmt[%d][%d] = ", i + 1, j + 1);
			scanf_s("%d", &mt[i][j]);
		}
	printf_s("Ваша исходная матрица:");
	for (i = 0; i < n; i++)
	{
		printf_s("\n");
		for (j = 0; j < m; j++) {
			printf_s("%4d", mt[i][j]);
		}
	}
	for (i=0;i<n;i++)                          //Блок сортировки 
		for (j=0; j<m; j++)
			for (k = 0; k < m; k++) {
				if (mt[i][k] < mt[i][j]) {
					zam = mt[i][j];
					mt[i][j] = mt[i][k];
					mt[i][k] = zam;
				}

			}
	printf_s("\nВаша получившаяся матрица:");
	for (i = 0; i < n; i++)
	{
		printf_s("\n");
		for (j = 0; j < m; j++) {
			printf_s("%4d", mt[i][j]);
		}
	}




}