#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    string reduced;
    if (s.size() == 0)
        return "Empty String";
    int x_or = s[0]; 
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i-1]) {
            if (x_or != 0) 
                reduced += s[i-1];
            x_or = 0; 
        }
        x_or ^= s[i];
    }
    if (x_or != 0)
        reduced += s[s.size()-1];
    
    if (reduced.size() == s.size())
        return reduced;
    reduced = super_reduced_string(reduced);
    return reduced;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}

