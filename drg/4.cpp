#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    cin.ignore();
    int n;
    cin >> n;
    vector<string> words;

    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        words.push_back(p);
    }

    string pr;
    for(int i = 0; i < words.size(); i++)
    {
        pr += words[i];
        if(pr == s)
        {
            cout << "true";
            return 0;
        }
    }
    cout << "false";

    return 0;
}
