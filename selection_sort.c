#include <stdio.h>

/* Selection Sort (inplace, internal sorting)
* select element (i=0 first )as the key
* check if it is greater than i+1 element, then mark i+1 element as current smallest
* using "current_smallest" compare rest of elements after i+2 till n (sizeof array)
* move the smallest based on comparison
* At 'n' swap the key with "current_smallest"
*/
int main(int argc, char const *argv[])
{
  int input_list[] = {3,53,22,7,25,36,10}; //Random
  //int input_list[] = {3,5,7,9,11,13,15,17}; // Ascending
  //int input_list[] = {10,9,8,7,6,5,4,3,2,1}; //descending sorted
  int sizeof_list = sizeof(input_list)/sizeof(int);
  int key_element  = 0 ;
  int current_smallest = 0;
/* outer loop to iterate, to take a key element and create a sorted list(sub) in left
part of array
*/
for (int key_start_index = 0; key_start_index < sizeof_list; key_start_index++)
{
  current_smallest = key_element = input_list[key_start_index];
  int current_smallest_index = key_start_index;
    /*  Inner loop  to find the smallest value */
  for (int index= key_start_index; index< sizeof_list; index++)
  {
    if (current_smallest > input_list[index])
    {
        /* element seems to be the smallest compared to current, update it to be the new smalles */
      current_smallest = input_list[index];
      current_smallest_index = index;
    }
  }

  input_list[key_start_index] = input_list[current_smallest_index];
  input_list[current_smallest_index] = key_element;
}
for (int i = 0; i < sizeof_list; ++i)
{
  printf("%d,",input_list[i]);
}
return 0;
}