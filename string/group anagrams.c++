
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class solution {
    public:

    bool isanagram(string s1, string s2) {
        if(s1.length() != s2.length()) {
            return false;
        }

        // sort both strings
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        // compare both strings
        return (s1 == s2);
    }

    vector<vector<string>> anagram(vector<string> &arr) {
        vector<vector<string>> res;
        int n = arr.size();

        vector<bool> visited(n, false);

        for(int i = 0; i < n; i++) {
            if(visited[i])
                continue;

            vector<string> group;
            group.push_back(arr[i]);
            visited[i] = true;

            for(int j = i + 1; j < n; j++) {
                if(!visited[j] && isanagram(arr[i], arr[j])) {
                    group.push_back(arr[j]);
                    visited[j] = true;
                }
            }

            res.push_back(group);
        }

        return res;
    }
};

int main() {
    vector<string> arr = {"act", "god", "cat", "dog", "tac"};

    solution obj;
    vector<vector<string>> res = obj.anagram(arr);

    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";

        cout << "\n";
    }

    return 0;
}
