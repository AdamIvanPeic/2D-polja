#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int main(void)
{
    int n, sn = 0, ssn = 0, sssn = 0;

    vector<string> se, im;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        string p, ps, pi;
        getline(cin, p);
        int r = p.find(' ');

        ps = p.substr(0, r);
        pi = p.substr(r+1);

        se.push_back(ps);
        im.push_back(pi);
    }

    string s = "section", ss = "subsection", sss = "subsubsection";
    for(int i = 0; i < n; i++)
    {
        string sec = se.at(i);

        if(i != 0)
            cout << endl;
        if(sec == s)
        {
            cout << ++sn << " " << im.at(i);
            ssn = 0;
            sssn = 0;
        }
        else if(sec == ss)
        {
            cout << sn << "." << ++ssn << " " << im.at(i);
            sssn = 0;
        }
        else if(sec == sss)
            cout << sn << "." << ssn << "." << ++sssn << " " << im.at(i);
    }

    return 0;
}
