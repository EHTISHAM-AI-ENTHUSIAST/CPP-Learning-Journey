#include <iostream> // Input aur output ke liye
using namespace std;

int main()
{
    double amount;

    cout << "enter the purchase amount: ";

    cin >> amount;

    double discountRate;

    if (amount >= 5000)
    {
        discountRate = 15;
    }
    else
    {
        discountRate = 10;
    }
    double discount = (amount * discountRate) / 100;
    double finalAmount = amount - discount;
    cout << "the discount is: RS " << discount << endl;
    cout << "the final amount after discount is: RS" << finalAmount << endl;

    return 0;
}
