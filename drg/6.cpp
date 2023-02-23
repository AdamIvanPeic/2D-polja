#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n;
    int br = -1, mx = 0;
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

    for(int i = 0; i < s.size(); i++)
        if(count(s.at(i).begin(), s.at(i).end(), t) > mx)
        {
            mx = count(s.at(i).begin(), s.at(i).end(), t);
            br = i+1;
        }

    cout << br;

    return 0;
}
