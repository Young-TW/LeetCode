// Leetcode: https://leetcode.com/problems/roman-to-integer/

#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        char flag = 'M';
        int result = 0;
        while (!s.empty()) {
            if (s.front() == flag) {
                s.erase(s.front());
            } else if (s.front() == 'C' && flag == 'D') {
                result += 400;
                s.erase(s.front());
            } else if (s.front() == 'C' && flag == 'M') {
                result += 900;
                s.erase(s.front());
            } else if (s.front() == 'X' && flag == 'L') {
                result += 40;
                s.erase(s.front());
            } else if (s.front() == 'X' && flag == 'C') {
                result += 90;
                s.erase(s.front());
            } else if (s.front() == 'I' && flag == 'V') {
                result += 4;
                s.erase(s.front());
            } else if (s.front() == 'I' && flag == 'X') {
                result += 9;
                s.erase(s.front());
            } else {
                switch (s.front()) {
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

                flag = s.front();
                s.erase(s.front());
            }
        }

        return result;
    }
};
