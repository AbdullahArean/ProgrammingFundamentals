#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
bool myCompare(string a, string b)
{
    return a.length()>b.length();
}
int main()
{
    string s("Hello World");
    cout << s << endl;
    string s2 = "Another Day";
    cout << s2<< endl;
    cout<< s2.length()<<endl;
    for( int j=0; j<s2.length(); j++)
    {
        cout << s2[j]<<"-";
    }
    cout<<""<<endl;
    string s3;
    getline(cin,s3);
    cout<< s3<< endl;

    string arr[] = { "Apple", "Pinaple", "Mango is", "guava"};
    sort(arr, arr+4, myCompare);
    for(int i=0; i<4; i++)
    {
        cout << arr[i] << ", "<<endl; 
    }
    return 0;
}
