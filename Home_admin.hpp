#ifndef _HOME_ADMIN_HPP_
#define _HOME_ADMIN_HPP_
#include "Human.hpp"
class Home_admin : public Human
{
public:
	Home_admin()
	{
		BecameRuthless();//обязательно
	}
	void CollectMoney();//его самое любимое
	void Populate();//кто-то должен платить деньги
	void Evict();//чтобы жизнь малиной не казалась


private:
	void BecameRuthless();//самое важное
};

#endif