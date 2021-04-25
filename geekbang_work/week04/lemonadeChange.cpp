class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int men_5 = 0;
        int men_10 = 0;
        int men_20 = 0;

        for (int i = 0; i < bills.size(); ++i) {
            if (bills[i] == 5) {
                men_5++;
                continue;
            }
            if (bills[i] == 10) {
                if (men_5 != 0) {
                    men_5--;
                    men_10++;
                    continue;
                }
                return false;
            }
            if (bills[i] == 20) {
                if (men_10 != 0 && men_5 != 0) {
                    men_10--;
                    men_5--;
                    men_20++;
                    continue;
                }
                if (men_5 >= 3) {
                    men_5 = men_5 - 3;
                    men_20++;
                    continue;
                }
                return false;
            }
        }
        return true;
    }
};