// CodeChef Aug22 Lunchtime 3hr

#include <iostream>
#include <vector>
#include <algorithm>
void solve()
{
    int n; std::cin >> n;
    std::vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        int d;std::cin >> d;
        v[i] = d;
    }
    std::sort(v.begin(), v.end());
    int beg = count(v.begin(), v.end(), v[0]);
    int mid = count(v.begin(), v.end(), v[n/2]);
    int end = count(v.begin(), v.end(), v[n-1]);
    if (n % 2 == 1)
    {
        int half = (n/2) + 1;
        if (beg > half || mid > half || end > half)
        {
            std::cout << "no" << "\n";
            return;
        }
    }
    if (n % 2 == 0)
    {
        int half = n/2;
        if (beg > half || mid > half || end > half)
        {
            std::cout << "no" << "\n";
            return;
        }
    }
    std::cout << "yes" << "\n";
}
int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        //std::cout << "Question Number " << t << ": ";
        solve();
    }
}
