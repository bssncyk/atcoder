#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int ans = a+b;
    ans = max(ans, a-b);
    ans = max(ans, a*b);
    cout << ans << endl;
    return 0;
}