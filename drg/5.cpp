#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n, m;
    int br = 0;
    cin >> n;
    vector<string> words1, words2;

    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        words1.push_back(p);
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        string p;
        cin >> p;
        words2.push_back(p);
    }

    for(int i = 0; i < words1.size(); i++)
        if((count(words1.begin(), words1.end(), words1.at(i)) == 1) && (count(words2.begin(), words2.end(), words1.at(i)) == 1))
            br++;

    cout << br;

    return 0;
}
