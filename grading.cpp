#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    vector<int>::iterator it; 
    for (it = grades.begin(); it != grades.end(); it++) {
        int marks = *it;
        if (marks >= 38) {
            int diff = marks % 5;
            if (diff >= 3) {
                marks += (5 - diff); 
                *it = marks;
            }
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
