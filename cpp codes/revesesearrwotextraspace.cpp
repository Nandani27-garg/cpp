#include <iostream>
using namespace std;
void reverseArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
    int main()
    {
        int arr[] = {5, 4, 3, 9, 12};
        int n = sizeof(arr) / sizeof(int);
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int temp = arr[start]; // swap two numbers
            arr[start] = arr[end];
            arr[end] = temp ;// another way of swaping in cpp is swap(arr[sart],arr[end])
            start++;
            end--;
        }

        reverseArray(arr, n);
        return 0;
    }