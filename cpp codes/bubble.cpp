#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])  //it sort in decending order if we want acanding order we have to change sign
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    print(arr,n);
}
int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    int n = 5;
    bubbleSort(arr, n);
    return 0;
}

//time complexity of bubble sort is o(n^2)