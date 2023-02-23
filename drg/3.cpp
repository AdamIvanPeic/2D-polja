#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n;
    vector<string> word1, word2;

    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        word1.push_back(p);
    }
    cin.ignore();
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        string p;
        cin >> p;
        word2.push_back(p);
    }

    string s1 = "";
    for(int i = 0; i < word1.size(); i++)
        s1 += word1.at(i);

    string s2 = "";
    for(int i=0; i<word2.size(); i++)
        s2 += word2.at(i);

    if(s1 == s2)
        cout << "true";
    else
        cout << "false";

    return 0;
}
