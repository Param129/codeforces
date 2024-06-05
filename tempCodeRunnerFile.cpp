 '1's
        bool all_zero = true;
        bool all_one = true;
        
        for (char c : s) {
            if (c != '0') all_zero = false;
            if (c != '1') all_one = false;
        }

        if (all_zero) {
            cout << 1 << endl;
        } else if (all_one) {
            cout << 0 << endl;
        } else {
            // If the string contains both '0's and '1's
            int count_01 = 0;
            int count_10 = 0;

            for (int i = 1; i < s.size(); ++i) {
                if (s[i-1] == '0' && s[i] == '1') count_01++;
                if (s[i-1] == '1' && s[i] == '0') count_10++;
            }

            // Minimum number of segments needed to cover all transitions
            int transitions = (count_01+