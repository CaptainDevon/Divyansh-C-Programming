#include <iostream>
using namespace std;
int main() {
int a ;
cout<<"enter the number:";
cin>>a;
int b = 2;
//start from b as 1 can divide any number
bool prime = true;
while(b!=a){
    if(a%b == 0)
        {
            prime = false;
            break;
        }
    b++;
}
if(prime)
cout<<"prime number";
else cout<<"not a prime number";
return 0;
}