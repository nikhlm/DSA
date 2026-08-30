#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {

    if (t.size() > s.size())
        return "";

    vector<int> freq(256, 0);

    // Store frequency of characters in t
    for (char c : t) {
        freq[c]++;
    }

    int left = 0;
    int right = 0;

    int required = t.size();
    int minLength = INT_MAX;
    int startIndex = 0;

    while (right < s.size()) {

        // If current character is needed
        if (freq[s[right]] > 0) {
            required--;
        }

        freq[s[right]]--;
        right++;

        // When window contains all characters
        while (required == 0) {

            // Update minimum window
            if (right - left < minLength) {
                minLength = right - left;
                startIndex = left;
            }

            // Remove left character
            freq[s[left]]++;

            if (freq[s[left]] > 0) {
                required++;
            }

            left++;
        }
    }

    if (minLength == INT_MAX)
        return "";

    return s.substr(startIndex, minLength);
}

int main() {

    string s, t;

    cin >> s >> t;

    string answer = minWindow(s, t);

    if (answer == "")
        cout << "No valid window found";
    else
        cout << "Minimum Window: " << answer;

    return 0;
}