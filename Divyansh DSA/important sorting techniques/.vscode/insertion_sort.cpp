#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void insertion_sort(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (nums[j] > nums[i])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
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
    s.insertion_sort(a);

    return 0;
}