#include "Account.class.hpp"
#include <iostream>


int Account::_nbAccounts =0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int _accountIndex;




Account::Account(int initial_deposit){

static int i = 0;

_accountIndex = i;
_totalAmount = _totalAmount + initial_deposit;
_amount = initial_deposit;
_nbWithdrawals = 0;
//_nbdeposit = initial_deposit;
_nbAccounts = i + 1;

_displayTimestamp();
std::cout << "index:";
std::cout << i;
std::cout << ";amount:";
std::cout << initial_deposit;
std::cout << ";created";
std::cout << "\n";
i++;

}

Account::~Account(void){

}

Account::Account(){

}

void Account::makeDeposit(int deposit){

int i = 1;
static int deps = 1;
static int newtotal = 0;

_nbDeposits = i;
_totalNbDeposits = deps;
    _displayTimestamp();
    std::cout << "index:";
  
    std::cout << _accountIndex;
  std::cout << ";p_amount:";
  std::cout << _amount;
  std::cout <<";deposit:";
  std::cout << deposit;
  std::cout<< ";amount:";
  std::cout << _amount + deposit;
  std::cout << ";nb_deposits:";
  std::cout << _nbDeposits;
  std::cout << "\n";
  _amount = _amount + deposit;
  newtotal = newtotal + _amount;
_totalAmount = newtotal;
  i++;
  deps++;
}

bool Account::makeWithdrawal(int withdrawal){
int i = 1;
static int deps = 1;
static int newtotal = 0;

if (withdrawal > _amount){
    _displayTimestamp();
 std::cout << "index:";
  
    std::cout << _accountIndex;
  std::cout << ";p_amount:";
  std::cout << _amount;
  std::cout << ";withdrawal:";
  std::cout << "refused";
  std::cout << "\n";
return false;
}
_nbDeposits = deps;
_totalNbWithdrawals = i;
    _displayTimestamp();
    std::cout << "index:";
  
    std::cout << _accountIndex;
  std::cout << ";p_amount:";
  std::cout << _amount;
  std::cout <<";withdrawal:";
  std::cout << withdrawal;
  std::cout<< ";amount:";
  std::cout << _amount - withdrawal;
  std::cout << ";nb_withdrawals:";
  std::cout << _totalNbWithdrawals;
  std::cout << "\n";
  _amount = _amount - withdrawal;
  newtotal = newtotal - _amount;
_totalAmount = newtotal;
  i++;
  deps++;
return true;
}

int Account::checkAmount(void) const{

// std::cout << _amount;
return 0;
}

void Account::displayStatus(void) const{

_displayTimestamp();
std::cout << "index:";
std::cout << _accountIndex;
std::cout <<";amount:";
std::cout << _amount;
std::cout << ";deposits:";
std::cout << _nbDeposits;
std::cout << ";withdrawals:";
std::cout << _nbWithdrawals;
std::cout << "\n";

}

void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:";
    std::cout << _nbAccounts;
    std::cout << ";total:";
    std::cout << _totalAmount;
    std::cout << ";deposits:";
    std::cout << _totalNbDeposits;
    std::cout << ";withdrawals:";
    std::cout << _totalNbWithdrawals;
    std::cout << "\n";

// std::cout << _totalAmount;
// std::cout << "\n";
// std::cout << _totalNbDeposits;
// std::cout << "\n";
// std::cout << _nbAccounts;
// std::cout << "\n";
// std::cout << _totalNbWithdrawals;
}

void Account::_displayTimestamp(void){

std::cout << "[date] ";
}

int Account::getNbAccounts( void ){
    return _nbAccounts;
}

int Account::getTotalAmount( void ){
    return _totalAmount;
}

int Account::getNbDeposits( void ){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}
