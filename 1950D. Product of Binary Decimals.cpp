#include <iostream>
#include <vector>

using namespace std;

bool isBinaryDecimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

bool canBeProduct(int n) {
    if (n == 1)
        return true;
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            if (isBinaryDecimal(i) && canBeProduct(n / i))
                return true;
        }
    }
    return isBinaryDecimal(n);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        if (canBeProduct(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
