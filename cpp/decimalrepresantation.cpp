#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    int i=1;
    while (n!=0){
        int digit = n%10;
        ans=  digit*i;
        cout<<ans;
        i=i*10;
        n = n/10;
    }

    
    

}