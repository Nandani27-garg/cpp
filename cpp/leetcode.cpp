/*subtract the product and sum of digits of an integer*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;/*% use for take the value like 234%10 = 4,3,2*/
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;/* / is use for remove the value like 234/10 = 23,2,0*/
    }

    cout << (prod - sum);
}