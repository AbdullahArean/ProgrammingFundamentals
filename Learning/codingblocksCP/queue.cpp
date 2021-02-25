#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<cstring>
#include<queue>
using namespace std;
//Difference between stack and queue is it starts adding from front but stack starts from back
int main()
{
    queue<string> s;
    s.push("Apple");
    s.push("Mango");
    s.push("Guava");
    while(!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }
    return 0;
}