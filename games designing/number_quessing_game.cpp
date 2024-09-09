#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int computer = 1 + rand() % 10;
    int n;
    int count = 1;
    while (true)
    {
        cout << "Enter a Number: ";
        cin >> n;
        if (n > computer)
            cout << "Too high!" << endl;
        else if (n < computer)
            cout << "Too Low!" << endl;
        else
        {
            cout << "Congratulations you have guessed the number in " << count << " attempts";
            break;
        }
        count++;
    }
    return 0;
}