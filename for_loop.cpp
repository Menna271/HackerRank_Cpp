/* https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true */

#include <iostream>
using namespace std;

int main() {
    // Complete the code.

    int a,b;
    string nums[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;

    if (a>=1 && a<=9 && b>=1 && b<=9)
    {
        for(int i=a; i<=b; i++)
        {
            cout<<nums[i-1]<<endl;
        }
    }
    else if(a>=1 && a<=9 && b>9)
    {
        for(int i=a; i<=9; i++)
        {
            cout<<nums[i-1]<<endl;
        }
        for (int i=10; i<=b; i++)
        {
            if (i%2 == 0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
    }
    else if (a>9 && b>9)
    {
        for (int i=a; i<=b; i++)
        {
           if (i%2 == 0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
    }

    return 0;
}