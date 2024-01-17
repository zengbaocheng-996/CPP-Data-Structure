#include "mergeSort.h"
#include "quickSort.h" 

void bubbleSort(int array[], int size)
{
    // run loops two times: one for walking through the array
    // and the other for comparison
    for (int step = 0; step < size - 1; ++step)
        for (int i = 0; i < size - step - 1; ++i)
        {
            // To sort in descending order, change > to < in this line
            if (array[i] > array[i + 1])
            {
                // swap if greater is at the rear position
                swap(array[i], array[i + 1]);
            }
        }
}

int main()
{
    int numbers[] = {5, 1, 3, 8, 2, 7, 4, 6};
    int sizeNumbers = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Original Array before sorting:" << endl;
    for (auto &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // bubbleSort(numbers, sizeNumbers);
    // mergeSort(numbers, 0, sizeNumbers - 1);
    quickSort(numbers, 0, sizeNumbers - 1);

    cout << "Sorted Array in Ascending Order:" << endl;
    for (auto &num : numbers)
    {
        cout << num << " ";
    }
    getchar();
}