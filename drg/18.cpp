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
    cin >> n;
    vector<string> o;
    vector<string> r;

    for(int i = 0; i < n; i++)
    {
        string p;
        string pr;
        cin >> p >> pr;
        o.push_back(p);
        r.push_back(pr);
    }

    for(int i = 0; i < o.size(); i++)
        if(o.at(i) == "ooooo")
            continue;
        else if(o.at(i) == r.at(i))
            br += 4;
        else
            br--;

    cout << br << endl << n*4 << endl << -1*n;

    return 0;
}
