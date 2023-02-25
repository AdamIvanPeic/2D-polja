#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int main(void)
{
    int n, m, br = 0;
    cin >> n >> m;

    string t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(t[i].at(j) == '*' && (i == 0 || t[i - 1].at(j) == '.') && (j == 0 || t[i].at(j - 1) == '.'))
                br++;

    cout << br;

    return 0;
}
