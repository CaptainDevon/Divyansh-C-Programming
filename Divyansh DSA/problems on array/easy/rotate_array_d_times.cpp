#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> rotated_array_by_d(vector<int> &nums, int k)
    {

        int n = nums.size();
        k = k % n;
        int j = 0;
        while (j < k)
        {
            int temp = nums[n - 1];
            for (int i = 0; i < n; i++)
            {
                nums[n - i] = nums[n - i - 1];
            }
            nums[0] = temp;
            j++;
        }
        return nums;
    }
};
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int k;
    cout << "enter number of times array has to be rotated: ";
    cin >> k;
    solution s;
    s.rotated_array_by_d(a, k);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}