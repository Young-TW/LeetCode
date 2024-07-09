#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        char flag = 'M';
        int result = 0;
        while (!s.empty()) {
            char target = s[0];
            if (target == flag) {
                s.erase(target);
            } else if (target == 'C' && flag == 'D') {
                result += 400;
                s.erase(target);
            } else if (target == 'C' && flag == 'M') {
                result += 900;
                s.erase(target);
            } else if (target == 'X' && flag == 'L') {
                result += 40;
                s.erase(target);
            } else if (target == 'X' && flag == 'C') {
                result += 90;
                s.erase(target);
            } else if (target == 'I' && flag == 'V') {
                result += 4;
                s.erase(target);
            } else if (target == 'I' && flag == 'X') {
                result += 9;
                s.erase(target);
            } else {
                switch (target) {
                    case 'I':
                        result += 1;
                        break;
                    case 'V':
                        result += 5;
                        break;
                    case 'X':
                        result += 10;
                        break;
                    case 'L':
                        result += 50;
                        break;
                    case 'C':
                        result += 100;
                        break;
                    case 'D':
                        result += 500;
                        break;
                    case 'M':
                        result += 1000;
                        break;
                }

                flag = target;
                s.erase(0, 1);
            }
        }

        return result;
    }
};
