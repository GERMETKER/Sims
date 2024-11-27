#ifndef _HOME_ADMIN_HPP_
#define _HOME_ADMIN_HPP_
#include "Human.hpp"
class Home_admin : public Human
{
public:
	Home_admin()
	{
		BecameRuthless();
	}
	void CollectMoney();
	void Populate();
	void Evict();
private:
	void BecameRuthless();//самое важное
};

#endif