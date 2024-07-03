#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p;
    p.first = 1;
    p.second = 2;
    pair<int, string> newpair = make_pair(100, "Name");
    cout << p.first << " " << p.second << endl;

    pair<int, int> p1 = {3, 4};
    cout << p1.first << " " << p1.second << endl;

    pair<int, int> p2 = p;
    cout << p2.first << " " << p2.second << endl;
    return 0;
}
