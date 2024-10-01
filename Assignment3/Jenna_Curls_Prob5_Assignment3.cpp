#include <iostream>
using namespace std;

class Stock
{
    private:
        string symbol;
        string name;
        double previousClosingPrice;
        double currentPrice;

    public:
        // Constructor
        Stock(string stockSymbol, string stockName)
        {
            symbol = stockSymbol;
            name = stockName;
            previousClosingPrice = 0.0;
            currentPrice = 0.0;
        }

        // Getter for symbol
        string getSymbol() const
        {
            return symbol;
        }

        // Getter for name
        string getName() const
        {
            return name;
        }

        // Getter for previousClosingPrice
        double getPreviousClosingPrice() const
        {
            return previousClosingPrice;
        }

        // Getter for currentPrice
        double getCurrentPrice() const
        {
            return currentPrice;
        }

        // Setter for previousClosingPrice
        void setPreviousClosingPrice(double price)
        {
            previousClosingPrice = price;
        }

        // Setter for currentPrice
        void setCurrentPrice(double price)
        {
            currentPrice = price;
        }

        // Getter for change in price (%)
        double getChangePercent() const
        {
            return ((currentPrice - previousClosingPrice) / abs(previousClosingPrice)) * 100;
        }
};

int main()
{
    Stock stock("NVDA", "NVIDIA Corp.");
    stock.setPreviousClosingPrice(27.5);
    stock.setCurrentPrice(27.6);

    cout << "Stock: " << stock.getSymbol() << " (" << stock.getName() << ")" << endl;
    cout << "Percentage change: " << stock.getChangePercent() << "%" << endl;

    return 0;
}