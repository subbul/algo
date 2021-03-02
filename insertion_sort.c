#include <stdio.h>

/* Insertion sort (in-place sorting, internal sorting)
* 1. Given array is split into  
* 			a.) first element on left half(sub-array) (start index be i ) 
*			b.) remaining elements on right half (sub-array) (start index be j)
* 2. Compare first element in right half with each element on left half starting j-1 till i
*			a.) if j-1 is greater than j, swap j-1 with j 
*			b.) continue comparing now j-1 with j-2 and so on till i=0
* 3. start from next j+1 and repeat #2 ( left half will have sorted list, right still have unsorted)
*
*/
int main(int argc, char const *argv[])
{
	/* Test Inputs */	
	int input_elements[] = {3,4,7,2,9,3,12,1}; // Random order
	//int input_elements[] = {1,2,3,4,5,6,7,8,9}; //Sorted order
	//int input_elements[] = {9,8,7,6,5,4,3,2,1}; //reverse sorted
	int input_length = sizeof(input_elements)/sizeof(int);


	/* outer loop to iterate right half of the array incrementally*/
	for (int right_pos = 1; right_pos < input_length; right_pos++)
	{
		int search_key = input_elements[right_pos];
		/* inner loop to search key within left half of sorted (sub)array */
		for (int left_pos = (right_pos-1); left_pos >= 0; left_pos--)
		{
			/* if search key is less than element in left sub-array, swap the place*/
			if(search_key <input_elements[left_pos])
			{
				input_elements[left_pos+1] = input_elements[left_pos];
				input_elements[left_pos] = search_key;
			}
		}
	}
	/* print the entire sorted array */
	for (int i = 0; i < input_length; ++i)
	{
		printf("%d, ",input_elements[i]);
		/* code */
	}
	printf("\n");//FIXME
}
