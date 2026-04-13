#include <iostream> 

class BankAccount {

    private:
        std::string owner;
        double balance;

    public:
        void setOwner(std::string ownerName)
        {
            owner = ownerName;
        }   
        std::string getOwner()
        {
            return owner;
        }
        void deposit(double money);
        void withdraw(double money);
        double getBalance();
        void getAccountInfo();
};

void BankAccount::deposit(double money)
{
    if (money > 0)
    {
        balance = balance + money;
        std::cout << "Neuer Kontostand: " << balance << std::endl;
    }
    else
    {
        std::cout << "Ungültige Eingabe" << std::endl;
    }
}

void BankAccount::withdraw(double money)
{
    if (balance > money)
    {
        balance = balance - money;
        std::cout << "Neuer Kontostand: " << balance << std::endl;
    }
    else 
    {
        std::cout << "Sie haben nicht genug Geld auf dem Konto" << std::endl;
    }
}

double BankAccount::getBalance()
{
    return balance;
}

void BankAccount::getAccountInfo()
{
    std::cout << "Owner: " << owner << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

int main()
{
    BankAccount Marcel;
    Marcel.setOwner("Marcel");
    Marcel.deposit(5000);
    Marcel.getAccountInfo();

    return 0;
}