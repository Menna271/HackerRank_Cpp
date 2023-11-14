/* https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true */

#include <iostream>
using namespace std;

int max_val(int val[4])
{
    int result = val[0];
    for (int i=1; i<4; i++)
    {
        if (val[i]>result)
        {
            result = val[i];
        }
    }
    return result;
}

int main() {
    // Complete the code.
    int nums[4] = {0};
    for (int i=0; i<4; i++)
    {
        scanf("%d",&nums[i]);
    }
    cout<<max_val(nums);

    return 0;
}