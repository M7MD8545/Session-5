#include <iostream>
using namespace std;

class BankAccount
{
private:
	int accountNumber;
	int balance;
public:
	void setAccountNumber(int n) {
		accountNumber = n;
	}
	void setBalance(int b) {
		balance = b;
	}

	int getAccountNumber() {
		return accountNumber;
	}
	int getBalance() {
		return balance;
	}
};

int main()
{
	BankAccount b;

	b.setAccountNumber(123456789);
	b.setBalance(200000);

	cout << b.getAccountNumber() << endl;
	cout << b.getBalance() << endl;
}
