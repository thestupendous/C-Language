#include<stdio.h>
#include<stdlib.h>

void printArray(int *arr,int size) {
	for (int i=0;i<size;i++)  printf("%d, ",arr[i]);
	printf("\n");
}

void printMArray(int **marr, int nrow, int ncol) {
	for (int i=0;i<nrow;i++)
	{
		for(int j=0;j<ncol;j++)
			printf("%d, ",marr[i][j]);

		printf("\n");
	}
}

int main()
{
	// single dimension
	int arr1[4];
	int arr5[4] = {};
	int arr2[3] = {0, 1, 3};
	int arr3[5] = {1, 2 ,3, 9, 5};
	int arr4[5] = {1, 2};


	printArray(arr1,4);
	printArray(arr2,3);
	printArray(arr3,5);
	printArray(arr4,5);
	printArray(arr5,4);


	//multi dimensional
	//int marr1[4][5];
	int **p_marr1 ;// (**int) malloc (sizeof(int)*5) ;
	p_marr1 = (int**) malloc ( sizeof(int*) * 4);

	for (int i=0;i<4;i++)
	{
		p_marr1[i] = (int*) malloc (sizeof(int)*5);
	}

	for (int i=0;i<4;i++)
		for (int j=0;j<5;j++)
		{
			p_marr1[i][j]= i+j ;
		}

	printMArray(p_marr1,4,5);
	free(p_marr1);
	return 0;
}
