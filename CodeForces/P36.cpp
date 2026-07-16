//P36. Little C Loves 3 I
#include <bits/stdc++.h>
using namespace std;    

int main(){
    int n; cin >> n;
    int a=1, b=1, c=n-2;
    if (n%3==2){
        b=2; c=n-3;
    }
    cout << a << " " << b << " " << c << endl;

}