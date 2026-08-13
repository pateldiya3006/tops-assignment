#include <stdio.h>

int main()
{
    const float GST_RATE = 18;
    float basePrice = 500;
    float gstAmount;
    float finalPrice;

    gstAmount = (basePrice * GST_RATE) / 100;
    finalPrice = basePrice + gstAmount;

    printf(" \nBase Price: %f", basePrice);
    printf(" \nGST Rate: %f", GST_RATE);
    printf(" \nGST Amount: %f", gstAmount);
    printf(" \nFinal Price: %f", finalPrice);

    
}
