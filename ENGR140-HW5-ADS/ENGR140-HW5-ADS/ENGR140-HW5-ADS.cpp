/* ENGR 140: Week 5 Demo for shopping cart total
/  Program does:
    1. Ask for tax rate (will keep asking for that rate until valid)
    2. Ask for item prices, one at a time until the user enters a -1 as input
    3. Print how many items, the total, and avg price

/Aaron Sizemore
9/24/2026
*/

#include <iostream>
#include <iomanip>


int main()
{
    //variables
    double taxRate; //tax percent the user will provide through input
    double price; //on item's price
    int count = 0; //stores number of current items
    double total = 0.00; //for sum of all prices so far

    // Step 1: do-while loop
    //will always run at least one time and is perfect for scenarios where ask, check, and repeat until correct is right.

    do
    {
        //Get tax rate from user
        std::cout << "Enter the tax rate (%): ";
        std::cin >> taxRate;

        // Check if tax rate is a negative number and if so provide error msg
        if (taxRate < 0) {
            std::cout << "Tax Rate cannot be a negative number...Try again.\n";
        }

    } while (taxRate < 0);

    // Step 2: while loop with a sentinel (-1 will mean stop)
    std::cout << "Enter a price (-1 to finish): ";
    std::cin >> price;

    while (price != -1) {

        // ++ one more item
        count = count + 1;
        // add current price to total
        total = total + price;

        //read next price at the end of the loop
        std::cout << "Enter a price (-1 to finish): ";
        std::cin >> price;

    }

    // Step 3: Make sure we have items before any division occurs
    if (count == 0) {
        std::cout << "No items entered.\n";
        return 0;
    }

    double average = total / count;
    double withTax = total + total * taxRate / 100;

    //Step 4: for loop - use when you know how many times to repeat something
    //print 30 =
    for (int i = 0; i < 30; i++) {
        std::cout << "=";
    }
    std::cout << "\n";

    // Print results with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Items:      " << std::setw(10) << count << "\n";
    std::cout << "Total ($):      " << std::setw(10) << total << "\n";
    std::cout << "Average ($):      " << std::setw(10) << average << "\n";
    std::cout << "With Tax ($):      " << std::setw(10) << withTax << "\n";


    return 0;
    
}

/*



*/ 
