#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(void)
{
    int n, m;
    vector<string> L1, L2;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        string p;
        getline(cin, p);
        L1.push_back(p);
    }

    cin >> m;
    cin.ignore();
    for(int i = 0; i < m; i++)
    {
        string p;
        getline(cin, p);
        L2.push_back(p);
    }
    vector<string> r;
    int mn = INT_MAX;
    for(int i = 0; i < L1.size(); i++)
        for(int j = 0; j < L2.size(); j++)
            if(L1.at(i) == L2.at(j))
                if(i+j < mn)
                {
                    mn = i+j;
                    r.clear();
                    r.push_back(L1.at(i));
                }
                else if (i+j == mn)
                    r.push_back(L1.at(i));

    for(int i = 0; i < r.size(); i++)
    {
        for(int j = 0; j < r.at(i).size(); j++)
            cout << r.at(i).at(j);
        cout << endl;
    }

    return 0;
}
