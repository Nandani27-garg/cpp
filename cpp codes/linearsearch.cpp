#include<iostream>//time complexity of linear search is O(n) and space complexity is O(1)uses for unsorted array and
// also for sorted array but it is not efficient for sorted array as we can use binary search for sorted array which has time complexity of O(log n)

using namespace std;
int linearSearch(int *arr,int n,int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;//if key is not found in the array then return -1

}
int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,10)<<endl;//returns the index of the key if found in the array
    cout<<linearSearch(arr,n,11)<<endl;//returns -1 if key is not found in the array


}