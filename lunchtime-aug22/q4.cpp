// CodeChef Aug22 Lunchtime 3hr

#include <iostream>

void solve()
{
    int n, m; std::cin >> n >> m;
    if (n % m == 0 and (n/m) % 2 == 0)
    {
        std::cout << "yes" << "\n";
    }
    else
    {
        std::cout << "No" << "\n";
    }
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
