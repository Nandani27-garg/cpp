#include <iostream>   //only uses for sorted array and it is more efficient than linear search as it has a time complexity of O(log n) whereas linear search has a time complexity of O(n) i

using namespace std;
int binarySearch(int *arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // to avoid integer overflow
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1; // if key is not found in the array then return -1
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout << binarySearch(arr, n, 10) << endl; // returns the index of the key if found in the array
    cout << binarySearch(arr, n, 11) << endl; // returns -1 if key is not found in the array
}