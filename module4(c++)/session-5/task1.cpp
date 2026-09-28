#include <iostream>
using namespace std;

class PaymentProcessor
{
public:
    void processPayment(double amount)
    {
        cout << "Payment processed without coupon" << endl;
        cout << "Final Amount: " << amount << endl;
    }

    void processPayment(double amount, string couponCode)
    {
        double discount = 0;

        if(couponCode == "SAVE10")
        {
            discount = amount * 0.10;
        }

        double finalAmount = amount - discount;

        cout << "Payment processed with coupon" << endl;
        cout << "Coupon Code: " << couponCode << endl;
        cout << "Final Amount: " << finalAmount << endl;
    }
};

int main()
{
    PaymentProcessor p;

    p.processPayment(1000);
    p.processPayment(1000, "SAVE10");

    return 0;
}
