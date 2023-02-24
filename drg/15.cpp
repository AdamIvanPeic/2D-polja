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
    vector<string> emails, s;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        emails.push_back(p);
    }

    for(int i = 0; i < emails.size(); i++)
    {
        string em = emails.at(i);

        for(int j = 0; em.at(j) != '@'; j++)
            if(em.at(j) == '.')
                em.erase(em.begin() + j);
            else if(em.at(j) == '+')
            {
                int t = j;
                while(em.at(j) != '@')
                    j++;

                em.erase(em.begin() + t, em.begin() + j);
                break;
            }

        if(find(s.begin(), s.end(), em) == s.end())
        {
            s.push_back(em);
            br++;
        }
    }

    cout << br;

    return 0;
}
