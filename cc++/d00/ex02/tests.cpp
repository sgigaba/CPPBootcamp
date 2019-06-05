// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.class.hpp"
#include <iostream>


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t; //vector containing Account objects
	typedef std::vector<int>								  ints_t; //vector containing int
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );  //possible function declaration or existing functions
	accounts_t				accounts( amounts, amounts + amounts_size ); //posible function declaration
	accounts_t::iterator 	acc_begin	= accounts.begin(); //vector iterator pointing to the first element in the vector
	accounts_t::iterator 	acc_end		= accounts.end(); //vector iterator pointing to the last element in vector

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 }; //deposits
	size_t const		d_size( sizeof(d) / sizeof(int) ); //posible function declaration
	ints_t				deposits( d, d + d_size ); //possible function decleration
	ints_t::iterator 	dep_begin	= deposits.begin(); //iterator pointing to first number in ints_t
	ints_t::iterator 	dep_end		= deposits.end(); //iterator pointing to last number in ints_t

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 }; //withdrawals
	size_t const		w_size( sizeof(w) / sizeof(int) ); 
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator 	wit_begin	= withdrawals.begin();
	ints_t::iterator 	wit_end		= withdrawals.end();

	std::cout << "here";
	Account::displayAccountsInfos(); //Calling displayAccountInfos from Account class
	std::cout << "display status";
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); //mem_fun_ref returns a function object of type T and expects a reference as an argument

	std::cout <<"making deposit";
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// My boss is a dick                                                          //
// ************************************************************************** //
