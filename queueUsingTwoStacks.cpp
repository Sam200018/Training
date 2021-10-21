#include <bits/stdc++.h>

using namespace std;
//to compile this use: g++ .ileName.cpp -o fileName
//to run this use: g++ .ileName.exe
int main()
{
    //go to competicion
    stack<int> stack1, stack2;
    int queries, r = 0, m = 0;
    cin >> queries;

    while (queries--)
    {
        cin >> r;
        if (r == 1)
        {
            // read the element to push it at the stack
            cin >> m;
            stack1.push(m);
        }
        else
        {
            if (stack2.empty())
            {
                while (!stack1.empty())
                {
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }
            if (!stack2.empty())
            {
                if (r == 2)
                {
                    stack2.pop();
                }
                if (r == 3){

                    cout<<stack2.top()<<endl;
                }
            }
        }
    }

    return 0;
}