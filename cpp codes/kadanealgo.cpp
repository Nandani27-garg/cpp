#include <iostream>
using namespace std;
void maxArrSum(int *arr, int n)
{
    int maxSum = INT64_MIN;
    int currSum = 0;
    for(int i = 0;i<n;i++){
        currSum+=arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout<<maxSum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxArrSum(arr, n);
    return 0;
}