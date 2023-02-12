#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[10000];
    int n = 0;
    for(int i = 0; ; i++){
        cin >> a[i];
        n++;
        if(a[i] == -1) break;
    }
    for(int i = 0; i < n-1; i++){
        if(a[i] >= 0 && a[i] % 5 == 0){
            cout << a[i]/5 << end;
        }
        else cout << '-1' << endl;
    }
    cout << "Bye";
    return 0;
}
