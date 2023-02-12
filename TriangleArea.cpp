#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double x = (a+b+c)/2;
    double area = sqrt(x * (x-a) * (x-b) * (x-c));
    cout << area;
    return 0;
}
