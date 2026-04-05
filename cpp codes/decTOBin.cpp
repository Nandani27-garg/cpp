#include<iostream>
using namespace std;
void decTOBin(int decNum){
    int n = decNum;
    int binNum = 0;
    int pow = 1;
    while(n >0){
        int lastDigit = n%2;
        binNum += lastDigit*pow;
        pow *= 10;
        n /= 2;
    }
    cout << binNum << endl;
}
int main(){
    decTOBin(20);
    return 0;
}