// CodeChef Aug22 Lunchtime 3hr

#include <iostream>

void solve()
{
    int a, b; std::cin >> a >> b;
    if (abs(a -b) % 2 == 0)
    {
        std::cout << "Yes" << "\n";
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
