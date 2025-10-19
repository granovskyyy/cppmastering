#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void currencyConverter(fstream& file, string fromCurrency, string toCurrency, double amount)
{
    string usd, currency;
    double usdval, currval;

    file.clear();
    file.seekg(0, ios::beg);

    while (file >> usdval >> usd  >> currval >> currency)
    {
        if (currency == toCurrency)
        {
            double result = amount * currval;
            cout << amount << " " << fromCurrency << " = " << result << " " << currency << endl;
        }
    }
}

void currencyBuying(fstream& file, string fromCurrency, string toCurrency, double amount)
{
    string usd, currency;
    double usdval, currval;

    file.clear();
    file.seekg(0, ios::beg);

    while (file >> usdval >> usd >> currval >> currency)
    {
        if (currency == fromCurrency)
        {
            double result = (amount / currval) * 1.05; 
            cout << amount << " " << fromCurrency << " = " << result << " " << toCurrency << endl;
        }
    }
}

int main()
{
    fstream file("currencies.txt");
    if (!file.is_open())
    {
        cout << "There is no file" << endl;
        return 1;
    }
    int op;
    do
    {
        cout << "CURRENCY CONVERTER" << endl;

    
    cout << "Choose conversion option: " << endl;
    cout << "1. USD to PLN" << endl;
    cout << "2. USD to EUR" << endl;
    cout << "0. Exit" << endl;
    cin >> op;

    if (op == 1 || op == 2)
    {
        int op2;
        cout << "Do you want to buy or sell currencies: 1-buy, 2-sell " << endl;
        cin >> op2;

        if (op == 1) // USD <-> PLN
        {
            if (op2 == 2)
            {
                cout << "Enter amount in USD: ";
                double amount;
                cin >> amount;
                currencyConverter(file, "USD", "PLN", amount);
            }
            else if (op2 == 1)
            {
                cout << "Enter amount in PLN: ";
                double amount;
                cin >> amount;
                currencyBuying(file, "PLN", "USD", amount);
            }
        }
        else if (op == 2) // USD <-> EUR
        {
            if (op2 == 2)
            {
                cout << "Enter amount in USD: ";
                double amount;
                cin >> amount;
                currencyConverter(file, "USD", "EUR", amount);
            }
            else if (op2 == 1)
            {
                cout << "Enter amount in EUR: ";
                double amount;
                cin >> amount;
                currencyBuying(file, "EUR", "USD", amount);
            }
        }
    }
    } while (op!=0);
    if (op == 0)
    {
        cout << "Exiting program." << endl;
    }

    return 0;
}

