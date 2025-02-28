
#include <iostream>
#include <iomanip> // for setprecision
#include <string>Bahara
// Constants
const float COMMISSION_FEE_RATE = 1.79f;

int main() {
    // Declare variables
    std::string investorName;
    int numberOfShares;
    float purchasePricePerShare, salePricePerShare;

    // Prompt user for input
    std::cout << "Enter investor name: ";
    getline(std::cin, investorName);

    std::cout << "Enter number of shares to invest: ";
    std::cin >> numberOfShares;

    std::cout << "Enter purchase price of one share: $";
    std::cin >> purchasePricePerShare;

    std::cout << "Enter sale price of one share: $";
    std::cin >> salePricePerShare;

    // Calculate purchase details
    float totalPurchaseAmount = purchasePricePerShare * numberOfShares;
    float commissionFeeOnBuying = totalPurchaseAmount * (COMMISSION_FEE_RATE / 100);
    float totalInvestedMoney = totalPurchaseAmount + commissionFeeOnBuying;

    // Calculate sale details
    float totalSellAmount = salePricePerShare * numberOfShares;
    float commissionFeeOnSelling = totalSellAmount * (COMMISSION_FEE_RATE / 100);
    float moneyFromSelling = totalSellAmount - commissionFeeOnSelling;

    // Calculate profit
    float profit = moneyFromSelling - totalInvestedMoney;

    // Display result in the specified format
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::right << std::setw(25) << "Investor Name: " << std::setw(10) << investorName << std::endl;
    std::cout << std::right << std::setw(25) << "Number of Shares: " << std::setw(10) << numberOfShares << std::endl;
    std::cout << std::right << std::setw(25) << "Purchase Price/Share: $" << std::setw(10) << purchasePricePerShare << std::endl;
    std::cout << std::right << std::setw(25) << "Sale Price/Share: $" << std::setw(10) << salePricePerShare << std::endl;

    std::cout << std::right << std::setw(25) << "Total Purchase Amount: $" << std::setw(10) << totalPurchaseAmount << std::endl;
    std::cout << std::right << std::setw(25) << "Commission Fee on Buying: $" << std::setw(10) << commissionFeeOnBuying << std::endl;
    std::cout << std::right << std::setw(25) << "Total Invested Money: $" << std::setw(10) << totalInvestedMoney << std::endl;

    std::cout << std::right << std::setw(25) << "Total Sell Amount: $" << std::setw(10) << totalSellAmount << std::endl;
    std::cout << std::right << std::setw(25) << "Commission Fee on Selling: $" << std::setw(10) << commissionFeeOnSelling << std::endl;
    std::cout << std::right << std::setw(25) << "Money From Selling: $" << std::setw(10) << moneyFromSelling << std::endl;

    std::cout << std::right << std::setw(25) << "Profit from Investment: $" << std::setw(10) << profit << std::endl;

    return 0;
}
