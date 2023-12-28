/*Linear Search

Linear Search is defined as a sequential search algorithm that starts at one end and goes 
through each element of a list until the desired element is found, otherwise the search
continues till the end of the data set.
*/

#include<stdio.h>

int linear_search(int arr[], int query, int size)
{
	for (int i = 0; i<size; i++)
	{
		if (arr[i] == query)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 34, 20, 11};
	int query = 4;
	int size = sizeof(arr)/sizeof(int);
	
	int result = linear_search(arr, query, size);
	if (result == -1) 
	{
		printf("Element not found in the array!");
	}
	else 
	{	
		printf("Element is present at index %d of the array.", result);
	}
		
}