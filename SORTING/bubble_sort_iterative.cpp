/*Bubble Sort Code 
Time complexity: O(n^2)
Space complexity: O(1)


*/

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size)
{

  // loop to access each array element
  for (int j = 0; j < size; ++j)
  {

    // loop to compare array elements
    for (int i = 0; i < size - j; ++i)
    {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1])
      {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main()
{
  int data[] = {58,6,72,69,89,99,93};

  // find array's length
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);

  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}
