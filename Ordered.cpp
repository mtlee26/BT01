#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool b = ((x < y && y < z)||(x > y && y > z));
    cout << b;
    return 0;
}
