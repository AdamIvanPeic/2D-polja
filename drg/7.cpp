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

    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        s.push_back(p);
    }
    cin.ignore();
    char t;
    cin >> t;

    for(int i = 0; i < s.at(n-1).size(); i++)
    {
        size_t p = s.at(n-1).find(t);
        if(p != string::npos)
            s.at(n-1).replace(p, 1, "}");
    }

    for(int i = 0; i < s.at(n-1).size(); i++)
        cout << s.at(n-1).at(i);

    return 0;
}
