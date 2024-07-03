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

    pair<int, int> &p3 = p;

    cout << "Values Updated" << endl;
    cout << p.first << " " << p.second << endl;
    cout << p3.first << " " << p3.second << endl;
    p3.second = 44;
    cout << p3.first << " " << p3.second << endl;
    cout << p.first << " " << p.second << endl;

    cout << newpair.first << " " << newpair.second << endl;
    return 0;
}
