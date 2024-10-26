#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int actualAmount=0;
    if((w*(2*k+k*(w-1))/2)-n<0)cout<<0<<endl;
    else cout<<(w*(2*k+k*(w-1))/2)-n<<endl;
    return 0;
}