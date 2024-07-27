#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void bubble_sort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j <nums.size()-1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    int temp = nums[j + 1];
                    nums[j + 1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
    }
};
int main()
{
    vector<int> a = {1, 4, 2, 5, 6, 7, 3, 8};
    cout << "original array: ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "array after sorting: ";
    solution s;
    s.bubble_sort(a);

    return 0;
}