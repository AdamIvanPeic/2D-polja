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
    vector<string> w;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        w.push_back(p);
    }

    for(int i = 0; i < w.size(); i++)
    {
        int c1 = 0, c2 = 0, c3 = 0;
        string s = w.at(i);
        for(int j = 0; j < s.size(); j++)
            if(s.at(j)=='A' || s.at(j)=='a' || s.at(j)=='S' || s.at(j)=='s' || s.at(j)=='D' || s.at(j)=='d' || s.at(j)=='F' || s.at(j)=='f' || s.at(j)=='G' || s.at(j)=='g' || s.at(j)=='H' || s.at(j)=='h' || s.at(j)=='J' || s.at(j)=='j' || s.at(j)=='K' || s.at(j)=='k' || s.at(j)=='L' || s.at(j)=='l')
                c2++;
            else if(s.at(j)=='Z' || s.at(j)=='z' || s.at(j)=='X' || s.at(j)=='x' || s.at(j)=='C' || s.at(j)=='c' || s.at(j)=='V' || s.at(j)=='v' || s.at(j)=='B' || s.at(j)=='b' || s.at(j)=='N' || s.at(j)=='n' || s.at(j)=='M' || s.at(j)=='m')
                c3++;
            else
                c1++;
        if(c1 != w.at(i).size() && c2 != w.at(i).size() && c3 != w.at(i).size())
        {
            w.erase(w.begin()+i);
            i--;
        }
    }

    for(int i = 0; i < w.size(); i++)
    {
        for(int j = 0; j < w.at(i).size(); j++)
            cout << w.at(i).at(j);
        cout << endl;
    }
    if(w.size() == 0)
        cout << "-";

    return 0;
}
