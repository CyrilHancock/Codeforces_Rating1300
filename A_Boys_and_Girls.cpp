#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
 
 
int main()
{
    fastread();
 
    size_t n, m;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;

    if (n >= m)
    {
        string s(n+m, 'B');
        for (size_t i = 1; i < m * 2; i += 2)
        {
            s[i] = 'G';
        }
        cout << s << endl;
    }
    else
    {
        string s(m+n, 'G');
        for (size_t i = 1; i < n * 2; i += 2)
        {
            s[i] = 'B';
        }
        cout << s << endl;
    }
    return 0;
}