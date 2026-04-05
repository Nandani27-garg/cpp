#include<iostream>
using namespace std;
void binTODec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1;
    while(n >0){
        int lastDigit = n%10;
        decNum += lastDigit*pow;
        pow *= 2;
        n /= 10;
    }
    cout << decNum << endl;
}
int main(){
    binTODec(10);
    return 0;
}