#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<string> na;
    vector<int> he;

    for(int i = 0; i < n; i++)
    {
        string p;
        int pi;
        cin >> p >> pi;
        na.push_back(p);
        he.push_back(pi);
    }

    for(int i = 0; i < he.size(); i++)
        for(int j = 0; j < he.size(); j++)
            if(he.at(i) > he.at(j))
            {
                swap(he.at(i), he.at(j));
                swap(na.at(i), na.at(j));
            }

    for(int i = 0; i < na.size(); i++)
    {
        for(int j = 0; j < na.at(i).size(); j++)
            cout << na.at(i).at(j);
        cout << ' ';
    }

    return 0;
}
