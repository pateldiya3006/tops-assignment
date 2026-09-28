#include <iostream>
using namespace std;

class FlipkartSearch
{
public:
    void searchProduct(string productName)
    {
        cout << "Searching for product: " << productName << endl;
    }

    void searchProduct(string productName, string category)
    {
        cout << "Searching for product: " << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main()
{
    FlipkartSearch search;

    search.searchProduct("iPhone 15");

    cout << endl;

    search.searchProduct("Laptop", "Electronics");

    return 0;
}
