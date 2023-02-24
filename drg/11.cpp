#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int main(void)
{
    string s[5];

    for(int i = 0; i < 5; i++)
        cin >> s[i];

    if(s[3] == s[0] && s[4] == s[1])
        cout << "DESNO";
    else if(s[3] == s[0] && s[4] == s[2])
        cout << "LIJEVO";
    else if(s[3] == s[1] && s[4] == s[0])
        cout << "LIJEVO";
    else if(s[3] == s[1] && s[4] == s[2])
        cout << "LIJEVO";
    else if(s[3] == s[2] && s[4] == s[0])
        cout << "DESNO";
    else if(s[3] == s[2] && s[4] == s[1])
        cout << "DESNO";

    return 0;
}
