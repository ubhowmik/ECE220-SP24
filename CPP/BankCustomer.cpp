#include "BankCustomer.h"

//Instantiate new customer with default accounts
BankCustomer::BankCustomer(string first_name, string last_name){
//IMPLEMENT ME
my_customer.set_name(first_name, last_name);
customer_savings.set_balance(0.0);
customer_savings.set_interest_rate(0.0);

}

//Instantiate new customer with defined accounts
BankCustomer::BankCustomer(string first_name, string last_name, double init_savings_balance, double monthly_savings_interest_rate){
//IMPLEMENT ME
my_customer.set_name(first_name, last_name);
customer_savings.set_balance(init_savings_balance);
customer_savings.set_interest_rate(monthly_savings_interest_rate);
}

//Define parameters of current savings account (does not create new checking account)
void BankCustomer::define_savings(double init_savings_balance, double monthly_savings_interest_rate){
//IMPLEMENT ME
customer_savings.set_balance(init_savings_balance);
customer_savings.set_interest_rate(monthly_savings_interest_rate);
}

//Returns string containing first and last name separated by a space
string BankCustomer::get_customer_name(void){
//IMPLEMENT ME

return my_customer.get_first_name()+" "+my_customer.get_last_name();

}


//Returns total balance savings account
double BankCustomer::query_savings_balance(void){
//IMPLEMENT ME

return customer_savings.get_balance();

}

//Deposits amount into savings (assume amount is positive)
void BankCustomer::operator + (const double& amount){
//IMPLEMENT ME
 double temp;
  temp=customer_savings.get_balance()+amount;

  customer_savings.set_balance(temp);

}

/* Withdraw amount from savings.  Return true if successful.
   If insuffient funds, completely deny charge and return false;
*/
bool BankCustomer::operator - (const double& amount){
//IMPLEMENT ME
  double temp;
  temp=customer_savings.get_balance()-amount;
if(temp<0)
return false;
else
{
customer_savings.set_balance(temp);
return true;
}
}

//Adds interest to savings account = savings*interest_rate
void BankCustomer::add_interest(void){
//IMPLEMENT ME
double temp;
temp=customer_savings.get_balance()+(customer_savings.get_balance()*customer_savings.get_interest_rate());
customer_savings.set_balance(temp);
}
