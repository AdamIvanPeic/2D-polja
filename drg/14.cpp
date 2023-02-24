#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int main(void)
{
    string date, d = "", m = "", y = "";
    getline(cin, date);

    vector<string> months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    d += date.at(0);

    if(isdigit(date.at(1)))
        d += date.at(1);
    else
        d.insert(d.begin(), '0');

    for(int i = 0; i < 4; i++)
    {
        y.insert(y.begin(), date.back());
        date.pop_back();
    }
    date.pop_back();

    for(int i = 0; i < 3; i++)
    {
        m.insert(m.begin(), date.back());
        date.pop_back();
    }
    for(int i = 0; i < months.size() ; i++)
        if(m == months.at(i))
        {
            m = to_string(i+1);
            break;
        }

    if(m.size() < 2)
        m.insert(m.begin(), '0');

    cout << y << "-" << m << "-" << d;

    return 0;
}
