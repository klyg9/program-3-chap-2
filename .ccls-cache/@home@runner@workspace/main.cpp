#include <iostream>
using namespace std;

int main() {
    // Define the given values
    const int TOTAL_CUSTOMERS = 16500;
    const double PERCENT_PURCHASING = 0.15;
    const double PERCENT_CITRUS_PREF = 0.58;

    // Calculate the number of customers
    int customers_purchasing = TOTAL_CUSTOMERS * PERCENT_PURCHASING;
    int citrus_pref_customers = customers_purchasing * PERCENT_CITRUS_PREF;

    // Display the results
    cout << "The approximate number of customers purchasing one or more energy drinks per week: " << customers_purchasing << endl;
    cout << "The approximate number of customers preferring citrus-flavored energy drinks: " << citrus_pref_customers << endl;

    return 0;
}