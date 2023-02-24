#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
int main(void)
{
    int n, br = 1;
    vector<string> words, w;
    string mo[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        string p;
        cin >> p;
        words.push_back(p);
    }

    for(int i = 0; i < words.size(); i++)
    {
        string t = "";
        for(int j = 0; j < words[i].size(); j++)
            t += mo[words.at(i).at(j) - 'a'];
        w.push_back(t);
    }

    for(int i = 1; i < w.size(); i++)
    {
        int j = 0;
        for(; j < i; j++)
            if((w[i].compare(w[j])) == 0)
                break;
        if(i == j)
            br++;
    }

    cout << br;

    return 0;
}
