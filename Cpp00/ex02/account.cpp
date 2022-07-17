#include "Account.hpp"
#include <iostream>
#include <ctime>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){return _nbAccounts;}
int	Account::getTotalAmount(void){return _totalAmount;}
int	Account::getNbDeposits(void){return _totalNbDeposits;}
int	Account::getNbWithdrawals(void){return _totalNbWithdrawals;}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts: "<<_nbAccounts << ";";
	cout << "total:" << _totalAmount << ";";
	cout << "deposits: " << _totalNbDeposits << ";";
	cout << "withdrawals: " << _totalNbWithdrawals;
	cout << endl;
}

Account::Account(int init_depo)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = init_depo;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_totalNbDeposits++;
	cout <<"index : "<<_accountIndex<<";amount : "<<_amount<<";created"<<endl;
}

Account::~Account()
{
	_displayTimestamp();
	_nbAccounts--;
	cout<<"index : "<<_accountIndex<<";amount : "<<_amount<<";closed"<<endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_amount += deposit;
	_totalAmount += _amount;
	_totalNbDeposits++;
	_nbDeposits++;
	cout<<"index: "<<_accountIndex<<";p_amount: "<<(_amount - deposit)<<";deposit: " \
		<<deposit<<";amount: "<<_amount<<";nb_deposit: "<<_nbDeposits<<endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<< \
		withdrawal<<";amount:"<<(_amount - withdrawal)<< \
		";nb_withdrawals:"<<_nbWithdrawals<<endl;
		return true;
	}
	else
	{
		cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:refused"<<endl;
		return false;
	}
}

int	Account::checkAmount(void)const
{
	return _amount;
}

void	Account::displayStatus(void)const
{
	_displayTimestamp();
	cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<_nbDeposits \
	<<";withdrawals:"<<_nbWithdrawals<<endl;
}

void	Account::_displayTimestamp()
{
	time_t now;
	tm	nowLocal;

	now = time(NULL); //get time from OS
	nowLocal = *localtime(&now);
	cout<<nowLocal.tm_year+1900<<nowLocal.tm_mon<<nowLocal.tm_mday \
	<<"_"<<nowLocal.tm_hour<<nowLocal.tm_min<<nowLocal.tm_sec<<"   ";
}
