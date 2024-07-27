#include <bits/stdc++.h>
using namespace std;

void swapping_i(vector<vector<int>> &m, int i1, int i2) {
    for (int j = 0; j < 5; j++) {
        int temp = m[i1][j];
        m[i1][j] = m[i2][j];
        m[i2][j] = temp;
    }
}

void swapping_j(vector<vector<int>> &m, int j1, int j2) {
    for (int i = 0; i < 5; i++) {
        int temp = m[i][j1];
        m[i][j1] = m[i][j2];
        m[i][j2] = temp;
    }
}

int main() {
    int ith, jth, count = 0;
    vector<vector<int>> m(5, vector<int>(5));
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;
            m[i][j] = x;
            if (x == 1) {
                ith = i;
                jth = j;
            }
        }
    }

    while (m[2][2] != 1) {
        if (ith > 2) {
            swapping_i(m, ith, ith - 1);
            ith--;
            count++;
        } 
        else if (ith < 2) {
            swapping_i(m, ith, ith + 1);
            ith++;
            count++;

        }
        if (jth > 2) {
            swapping_j(m, jth, jth - 1);
            jth--;
            count++;

        } 
        else if (jth < 2) {
            swapping_j(m, jth, jth + 1);
            jth++;
            count++;

        }
    }

    cout << count;
    return 0;
}
