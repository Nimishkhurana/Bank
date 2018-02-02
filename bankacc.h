class Bank
{
    char depositor_name[20];
    double account_no;
    char acc_type[20];
    double balance;
public:
   // Bank();
    void input();    //to get user info
    void deposit();   //to deposit money in an account
    void withdraw();  //to withdraw money
    void display();   //to display account details
    double getaccno(); //to get account no in main
};
