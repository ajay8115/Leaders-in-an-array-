#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<int> leaders(int a[], int n)
{
    int b[n];

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    reverse(b, b + n);

    int maxi = b[0];

    for (int i = 0; i < n; i++)
    {
        b[i] = max(b[i], maxi);
        maxi = max(b[i], maxi);
    }
 
    reverse(b, b + n);

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
        {
            ans.push_back(a[i]);
        }
    }

    return ans;
}