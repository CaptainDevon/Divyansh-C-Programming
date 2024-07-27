#include <bits/stdc++.h>
using namespace std;
class solution
{
    public:
    vector<int> leaders(vector<int>&a) {

   vector<int>ans;

   int n=a.size();

   if(n==1)return a;

   int i=n-2,j=n-1;

   ans.push_back(a[n-1]);

   while(i>=0 && j>=0){

       int num=a[i];

       if(num<=a[j]){

           i--;

           j=n-1;

           continue;

       }

       else j--;

       if(j==i){

           ans.push_back(num);

           i--;

           continue;

       }

   }

   return ans;

}
};
int main()
{
    vector<int>a={1,2,3,2};
    solution s;
    vector<int>result=s.leaders(a);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}