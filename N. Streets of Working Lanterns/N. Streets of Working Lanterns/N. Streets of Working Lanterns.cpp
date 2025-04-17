#include <iostream>
#include <string>
using namespace std;

string restore_parentheses(const string& s) {
    int n = s.length();
    if (n % 2 != 0) return "Impossible";

    int count_open = 0, count_close = 0, count_q = 0;
    for (char c : s) {
        if (c == '(') count_open++;
        else if (c == ')') count_close++;
        else count_q++;
    }

    int need_open = n / 2 - count_open;
    int need_close = count_q - need_open;
    if (need_open < 0 || need_close < 0) return "Impossible";

    string result;
    int balance = 0;
    for (char c : s) {
        if (c == '?') {
            if (need_open > 0) {
                result += '(';
                need_open--;
                balance++;
            }
            else {
                result += ')';
                balance--;
            }
        }
        else {
            result += c;
            if (c == '(') balance++;
            else balance--;
        }
        if (balance < 0) return "Impossible";
    }

    if (balance != 0) return "Impossible";
    return result;
}

int main() {
    string s;
    cin >> s;
    string res = restore_parentheses(s);
    cout << res << endl;
    return 0;
}
