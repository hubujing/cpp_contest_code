#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    size_t dotPos = s.find('.');
    string integerPart = s.substr(0, dotPos);
    string fractionalPart = s.substr(dotPos + 1);
    if (fractionalPart.empty()) {
        cout << integerPart << endl;
        return 0;
    }
    if (fractionalPart[0] >= '5') {
        int carry = 1;
        for (int i = integerPart.size() - 1; i >= 0; --i) {
            int digit = integerPart[i] - '0' + carry;
            if (digit >= 10) {
                integerPart[i] = '0';
                carry = 1;
            } else {
                integerPart[i] = digit + '0';
                carry = 0;
                break;
            }
        }
        if (carry == 1) {
            integerPart = '1' + integerPart;
        }
    }

    cout << integerPart << endl;
    return 0;
}