#include <cstdio>

const int mod = 1e9 + 7;

int pow(int x, int n) {
    int res = 1;
    while (n > 0) {
        if (n & 1) res = (long long)res * x % mod;
        x = (long long)x * x % mod;
        n >>= 1;
    }
    return res;
}

int inv(int x) {
    return pow(x, mod - 2);
}
