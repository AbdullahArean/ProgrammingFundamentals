#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<cstring>
//Difference between stack and queue is it starts adding from front but stack starts from back
using namespace std;
int main()
{
    stack<string> s;
    s.push("Apple");
    s.push("Mango");
    s.push("Guava");
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}