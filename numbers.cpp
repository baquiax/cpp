#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 123456;

    // if the cast for (logn long) is not present, the result will be wront
    // int * int will create an int result, so the representation as long long 
    // could mean different thing
    long long b = (long long) a*a;
    cout << b;
}