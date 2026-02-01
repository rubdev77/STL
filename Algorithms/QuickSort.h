#ifndef QUICKSORT_H
#define QUICKSORT_H

template <typename T>
void QuickSort(std::vector<T>& a, int l, int r)
{
    if(r-l <= 1)
    return;

    int pivotIndex = r - 1;
    T pivot = a[pivotIndex];
    int j = l;
    for(int i = l; i < pivotIndex; i++)
    {
        if(a[i] <= pivot)
        {
                std::swap(a[i], a[j]);
                j++;
        }
    }
    std::swap(a[j], a[pivotIndex]);
    QuickSort(a, l, j);
    QuickSort(a, l+1, r);
}

#endif