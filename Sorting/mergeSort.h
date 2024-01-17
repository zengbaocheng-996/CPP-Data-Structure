

// Merge two subarrays L and M into arr
void merge(int array[], int first, int mid, int last)
{
    // Create L <-A[first..q] and M <- A[first+1..r]
    int n1 = mid - first + 1;
    int n2 = last - mid;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++)
        L[i] = array[first + i];
    for (int j = 0; j < n2; j++)
        M[j] = array[mid + 1 + j];
    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = first;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = M[j];
            j++;
        }
        k++;
    }
    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = M[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int array[], int first, int last)
{
    if (first < last)
    {
        // m is the point where the array is divided into two subarrays
        int mid = first + (last - first) / 2;
        mergeSort(array, first, mid);
        mergeSort(array, mid + 1, last);

        // Merge the sorted subarrays
        merge(array, first, mid, last);
    }
}