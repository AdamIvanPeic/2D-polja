#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n, x = 0;
    cin >> n;
    vector<string> s;

    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        s.push_back(p);
    }
    for(int i = 0; i < n; i++)
    {
        size_t p = s.at(i).find("++");
        if(p != string::npos)
            x++;
        else
            x--;
    }
    cout << x;

    return 0;
}
