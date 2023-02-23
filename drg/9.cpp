#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;

    char p[n][100+1];
    char b[n][100+1];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> p[i][j];
            b[i][j] = '.';
        }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(p[i][j] == '#')
            {
                b[i][j] = '#';
                b[i + 1][j] = '#';
                b[i][j + 1] = '#';
                b[i + 1][j + 1] = '#';
            }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << b[i][j];
        cout << '\n';
    }

    return 0;
}
