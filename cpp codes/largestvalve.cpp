#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,9,12};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            // cout<<arr[i]<<" is the largest value in the array."<<endl;
        }
    }
    cout<<"The largest value in the array is: "<<max<<endl;
}
