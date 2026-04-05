#include <iostream>//time complexity of reversing an array is O(n) and space complexity is O(n) as we are using an extra array to store the reversed elements of the original array.
 //We can also reverse the array in place without using extra space by swapping the elements from the start and end of the array until we reach the middle of the array. 
 //This will have a time complexity of O(n) and space complexity of O(1).
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

    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
    reverseArray(arr, n);
    return 0;
}