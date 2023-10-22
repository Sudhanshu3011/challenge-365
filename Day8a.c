#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(pair A, pair B)
{
    if (A.first = B.first)
        return A.second < B.second;
    return A.first < B.first;
}
int solve(int location[], int n)
{
 
    pair range[n];
    for (int i = 0; i < n; i++)
    {
        int id = i + 1;
        range[i].first = max(1, id – location[i]);
        range[i].second = min(n, id + location[i]);
    }
 
    sort(range, range + n, compare);
 
    int i = 0;
    int ans = 0;
    while (i < n)
    {
        pair p = range[i];
        ans++;
        while (i + 1 < n && range[i].first == range[i + 1].first)
        {
            p.second = max(p.second, range[i + 1].second);
            i++;
        }
        //cout<> n;
    int location[n];
    for (int i = 0; i < n; i++)
        cin >> location[i];
 
    cout << solve(location, n) << endl;
    return 0;
}