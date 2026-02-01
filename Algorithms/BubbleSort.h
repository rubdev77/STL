#ifndef BUBBLESORT_H
#define BUBBLESORT_H


template <typename T>
void BubbleSort(std::vector<T>& arr)
{
    for(auto i = 0; i < arr.size() - 1; i++)
    {
        for(auto j = 0; j < arr.size() - i - 1; j++)
        {
        if(arr[j]>arr[j+1])
        std::swap(arr[j], arr[j+1]);
        }
    }
}

#endif