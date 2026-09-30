/* ENGR 140: HW5

    1. while will continue to run until a certain valuse is given and may accept incorrect inputs. do-while will run at least one time and is used for ask, check, and repeat is needed to ensure correct value is given
    2. A sentinel is the check value to stop the process. -1 is a safe value in this case due to a user being unable to work negative hours, where 8 is a positive number and a probable input.

/Aaron Sizemore
9/24/2026
*/

#include <iostream>
#include <iomanip>


int main()
{
    //variables
    double payRate; //Hourly pay rate the user will provide through input
    double shift; //number of hours
    double longshift=0.00; //longest shift entered
    int count = 0; //stores number of current inputs
    double total = 0.00; //for sum of all pay so far

    // Step 1: do-while loop
    //will always run at least one time and is perfect for scenarios where ask, check, and repeat until correct is right.

    do
    {
        //Get tax rate from user
        std::cout << "Enter the hourly pay rate: ";
        std::cin >> payRate;

        // Check if tax rate is a negative number and if so provide error msg
        if (payRate < 0) {
            std::cout << "Pay Rate cannot be a negative number...Try again.\n";
        }

    } while (payRate < 0);

    // Step 2: while loop with a sentinel (-1 will mean stop)
    std::cout << "Enter number of hours worked (-1 to finish): ";
    std::cin >> shift;
    longshift = shift;

    while (shift != -1) {
        if (shift > 0 && shift < 16) {
            // ++ one more item
            count = count + 1;
            // add current price to total
            total = total + shift;
            if (shift > longshift) {
                longshift = shift;
            }
        
        }
        else
            std::cout << "Invalid shift length, skipped.\n ";
        
        

        //read next price at the end of the loop
        std::cout << "Enter number of hours worked (-1 to finish): ";
        std::cin >> shift;
            
        

    }

    // Step 3: Make sure we have items before any division occurs
    if (count == 0) {
        std::cout << "No hours entered.\n";
        return 0;
    }

    double average = total / count;
    double estimatedPay = total * payRate;

    //Step 4: for loop - use when you know how many times to repeat something
    //print 30 =
    for (int i = 0; i < 30; i++) {
        std::cout << "=";
    }
    std::cout << "\n\n";

    // Print results with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Shifts Worked:         " << std::setw(10) << count << "\n";
    std::cout << "Total hours:           " << std::setw(10) << total << "\n";
    std::cout << "Average Shift (hrs):   " << std::setw(10) << average << "\n";
    std::cout << "Longest Shift (hrs):   " << std::setw(10) << longshift << "\n";
    std::cout << "Estimated Pay ($):     " << std::setw(10) << estimatedPay << "\n\n";


    return 0;
    
}

/*



*/ 
