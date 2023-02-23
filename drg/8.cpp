#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n, mx = 0;
    string nr = "";
    cin >> n;
    cin.ignore();
    vector<string> s;

    for(int i = 0; i < n; i++)
    {
        string p;
        getline(cin, p);
        s.push_back(p);
    }
    char t;
    cin >> t;

    int vel = s.at(0).size();
    for(int i = 0; i < vel; i++)
    {
        size_t r = s.at(0).find(' ');
        if(r != string::npos)
        {
            if(r > mx)
            {
                nr.replace(0, r, s.at(0), 0, r);
                mx = r;
            }
            s.at(0).erase(0, r+1);
        }
        else if(r == string::npos)
        {
            if(r > mx)
            {
                nr.replace(0, r, s.at(0), 0, r);
                mx = r;
            }
            s.at(0).erase(0, r+1);
            break;
        }
    }

    size_t p = nr.find(t);
    if(p != string::npos)
        cout << "DA";
    else
        cout << "NE";

    return 0;
}
