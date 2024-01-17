#include <iostream>
using namespace std;

// Function to Partition the array on the basis of pivot element
int partition(int array[], int low, int high)
{
    // Select the pivot element
    int pivot = array[high];
    int i = low - 1;

    // Put the elements smaller than pivot on the left
    // and greater than pivot on the right of pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return i + 1;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        // Select pivot position and put all the elements smaller
        // than pivot on left and greater than pivot on right
        int pi = partition(array, low, high);
        // Sort the elements on the left of pivot
        quickSort(array, low, pi - 1);
        // Sort the elements on the right of pivot
        quickSort(array, pi + 1, high);
    }
}