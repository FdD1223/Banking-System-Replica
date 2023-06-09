
#include <iostream>
using namespace std;


class Account{
    
    public:
        
        Account(string name, int account_number, int phone_number, float balance);
        ~Account(string name, int account_number, int phone_number, float balance);
        void update_info(str name, int phone_number);
        float get_balance();
        int get_accountNumber();
        string history();
        string deposit(float balance, float amount);
        string withdraw(float balance, float amount);
        string transfer(float amount, int account_number1, int account_number2);
        float interest(float balance, int num_month);
        

    private:
        
        int balance;
        int account_number;
        string name;
        int phone_number;

};








