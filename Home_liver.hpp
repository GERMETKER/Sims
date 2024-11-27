#ifndef _HOME_LIVER_HPP_
#define _HOME_LIVER_HPP_
#include "Human.hpp"
class Home_liver : public Human
{
public:
	void PayRent();
	void Hide();
	void HateHomeAdmin();

private:
	int money;
};


#endif