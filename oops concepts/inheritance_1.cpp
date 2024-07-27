#include <iostream>
using namespace std;
class mammels
{
private:
public:
    void mammel()
    {
        cout << "I am mammel" << endl;
    }
};
class marineanimals
{
private:
public:
    void marineanimal()
    {
        cout << "I am marine animal" << endl;
    }
};
class bluewhale : public mammels, public marineanimals
{
private:
public:
    void display()
    {
        cout << "I belong to both the categories: mammels as well as marine animals" << endl;
    }
};
int main()
{
    mammels m;
    marineanimals ma;
    bluewhale bw;
    bw.marineanimal();
    bw.mammel();
    bw.display();
    return 0;
}