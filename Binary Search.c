/*Binary Search

Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing 
the search interval in half. The idea of binary search is to use the information that the array 
is sorted and reduce the time complexity to O(log N).

To apply Binary Search algorithm:

The data structure must be sorted.
Access to any element of the data structure takes constant time.

*/

#include<stdio.h>

int binary_search(int arr[], int left, int right, int query)
{
	while(left <= right)
	{	
		int mid = left + ((right-left) / 2);
		if(arr[mid] == query)
			return mid;
		if(arr[mid] < query)
			left = mid + 1;
		else right = mid -1;
	}
	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 5, 6, 7, 9, 23, 34, 54};
	int size = sizeof(arr) / sizeof(int);
	int query = 34;

	int result = binary_search(arr, 0, size-1, query);
	
	if(result == -1)
	{
		printf("Element was not found!");	
	}	
	else 
	{
		printf("Element was found at index %d of the array.", result);
	}
}