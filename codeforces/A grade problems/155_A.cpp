#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int max=nums[0];
    int min=nums[0];
    for (int i = 1; i < n; i++)
    {   
        if(nums[i]>max){
            max=nums[i];
            count++;
        }
        else if(nums[i]<min)
        {
            min=nums[i];
            count++;
        }
    }



    cout << count << endl;
    return 0;
}