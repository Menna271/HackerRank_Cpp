/* https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true */

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int s;
    cin>>s;
    int arr[s]={0};
    for (int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    for(int i=s-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}