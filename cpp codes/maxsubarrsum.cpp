#include <iostream>
using namespace std;
void maxArrSum(int *arr, int n)
{
    int maxSum = INT64_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum;
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << maxSum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxArrSum(arr, n);
    return 0;
}