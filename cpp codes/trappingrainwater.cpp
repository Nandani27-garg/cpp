#include <iostream>
using namespace std;
void trap(int *hights, int n)
{
    int leftMax[20000];
    int rightMax[20000];
    leftMax[0] = 0;
    rightMax[n - 1] = n - 1;
    // left max
    for (int i = 0; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], hights[i - 1]);
    }
    // for right max
    for (int i = n - 2; i >= 0; i++)
    {
        rightMax[i] = max(rightMax[i + 1], hights[i + 1]);
    }
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - hights[i];
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }
    cout << "water trapped" << waterTrapped << endl;
}
int main()
{
    int hights[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(hights) / sizeof(int);
    trap(hights, n);
    return 0;
}