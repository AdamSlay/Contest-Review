// CodeChef Aug22 Lunchtime 3hr

#include <iostream>
#include <vector>
#include <algorithm>
void solve()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::vector<int>v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    std::sort(v.begin(), v.end());
    int total = v[0] + v[1];
    float avg = total / 2;
    if (avg < 35) 
    {
        std::cout << "Fail" << "\n";
    }
    else
    {
        std::cout << "Pass" << "\n";
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
