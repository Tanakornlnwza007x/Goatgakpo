#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double initialLoan, interestRate, yearlyPayment;

    cout << "Enter initial loan: ";
    cin >> initialLoan;

    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;

    cout << "Enter amount you can pay per year: ";
    cin >> yearlyPayment;

    // Table header
    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << endl;

    cout << fixed << setprecision(2);

    double prevBalance = initialLoan;
    int year = 1;

    while(prevBalance > 0){
        double interest = prevBalance * interestRate / 100.0;
        double total = prevBalance + interest;

        double payment;
        if(total <= yearlyPayment)
            payment = total;
        else
            payment = yearlyPayment;

        double newBalance = total - payment;

        cout << setw(13) << left << year;
        cout << setw(13) << left << prevBalance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;
        cout << endl;

        prevBalance = newBalance;
        year++;
    }

    return 0;
}
