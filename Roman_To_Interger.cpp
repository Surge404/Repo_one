class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int num = 0, ans = 0;
        int cap = 0;

        char units = s[n - 1];
        switch (units) {
            cout << "SWITCH";
        case 'M':
            cap = 1000;
            break;
        case 'D':
            cap = 500;
            break;
        case 'C':
            cap = 100;
            break;
        case 'L':
            cap = 50;
            break;
        case 'X':
            cap = 10;
            break;
        case 'V':
            cap = 5;
            break;
        case 'I':
            cap = 1;
            break;
        }

        /////////
        for (int i = n - 1; i > -1; i--) {
            cout << "Loop";
            char unit = s[i];
            switch (unit) {
                cout << "SWITCH";
            case 'M':
                num = 1000;
                break;
            case 'D':
                num = 500;
                break;
            case 'C':
                num = 100;
                break;
            case 'L':
                num = 50;
                break;
            case 'X':
                num = 10;
                break;
            case 'V':
                num = 5;
                break;
            case 'I':
                num = 1;
                break;
            }
            if (num >= cap) {
                cout << "ONE";
                ans += num;
                cap = num;
            } else {
                cout << "Tow";
                ans -= num;
            }
        }
        return ans;
    }
};
