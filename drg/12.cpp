#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int main(void)
{
    int n, br = 0;
    vector<string> words;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        words.push_back(p);
    }

    string s;
    cin >> s;

    for(int i = 0; i < words.size(); i++)
        if(s.find(words.at(i)) == 0)
            br++;

    cout << br;

    return 0;
}
