#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = 0;
    int min = a[0];
    int max = a[0];
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(a[i] < min) min = a[i];
        else if(a[i] > max) max = a[i];
    }
    cout << "Mean: " << sum*1.0/n << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min;
    return 0;
}
