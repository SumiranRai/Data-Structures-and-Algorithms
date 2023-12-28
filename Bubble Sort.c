//Bubble Sort

#include<stdio.h>

void swap(int* left, int* right)//holds the address of left and right index of the array
{
	int temp = *left;//holds the value stored in arr[left]
	*left = *right;//overrides its value with the value stored in the right index of the array;
	*right = temp;//overrides its value with the value of temp
}

void bubble_sort(int arr[], int size)
{
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main()
{
	int arr[] = {34, 23, 43, 22, 343, 54, 93, 3};
	int size = sizeof(arr)/ sizeof(int);
	
	bubble_sort(arr, size);
	for(int i=0; i<size; i++)
	{
	 printf("%d ", arr[i]);
	}		
}