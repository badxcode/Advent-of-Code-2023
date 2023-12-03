#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long sum = 0;
    string str;
    while (getline(cin, str))
    {
        int first, last;
        bool ffirst = false;

        for (int i=0; i<str.length(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                if (ffirst == false)
                {
                    first = str[i] - '0';
                    ffirst = true;
                }
                
                last = str[i] - '0';
            }

            
        }
        sum = sum + (first * 10) + last;
    }
    
    cout << sum << endl;

}

int main()
{

    #ifndef ONLINE_JUDGE
       freopen("problem1-input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    solve();

}