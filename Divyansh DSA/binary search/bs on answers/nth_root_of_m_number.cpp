#include <iostream>
using namespace std;
class solution
{
    private:
int func(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

public:
int NthRoot(int n, int m) {
    //Use Binary search on the answer space:
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1) {
            return mid;
        }
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
};
int main()
{
    int number;
    int n;
    cin >> number >> n;
    solution s;
    cout << s.NthRoot(n, number);
    return 0;
}