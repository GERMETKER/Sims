#ifndef _HOME_LIVER_HPP_
#define _HOME_LIVER_HPP_
#include "Human.hpp"
class Home_liver : public Human
{
public:
	void PayRent();
	void Hide();//Прятаться от управляющего, пришедшего за деньгами
	void HateHomeAdmin();//Потому что ему от вас нужны только деньги

private:
	int money;
};


#endif