#include <iostream>
#include <string>
using namespace std;
class computer
{
private:
    string computer_type, cpu, operating_system;
    int ram, hard_disc, year_of_purchase;
    double purchase_price;
    bool cd_rom = true, has_internet_access = true;

public:
    computer()
    {
        cout << "computer preference: ";
        cin >> computer_type;
        cout << "cpu type: ";
        cin >> cpu;
        cout << "operating system installed: ";
        cin >> operating_system;
        cout << "memory size: ";
        cin >> ram;
        cout << "hard-disc size: ";
        cin >> hard_disc;
        cout << "year of purchase: ";
        cin >> year_of_purchase;
        cout << "price of the setup: ";
        cin >> purchase_price;
        cout << endl;
    }
    void print()
    {
        cout << computer_type << endl;
        cout << cpu << endl;
        cout << operating_system << endl;
        cout << ram << endl;
        cout << hard_disc << endl;
        cout << year_of_purchase << endl;
        cout << purchase_price << endl;
        cout << cd_rom << endl;
        cout << has_internet_access << endl;
    }
    ~computer()
    {
        cout << "the constructor has been destroyed" << endl;
    }
};
int main()
{
    computer c;
    c.print();
    return 0;
}