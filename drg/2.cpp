#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<string> s;

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            s.push_back("FizzBuzz");
        else if(i % 3 == 0)
            s.push_back("Fizz");
        else if(i % 5 == 0)
            s.push_back("Buzz");
        else
            s.push_back(to_string(i));
    }

    for(int i = 0; i < n; i++)
        cout << s.at(i) << " ";

    return 0;
}
