#ifndef _HUMAN_HPP_
#define _HUMAN_HPP_
#include <iostream>
class Human
{
public:
	Human() = default;
	Human(int age, std::string name)
	{
		name_ = name;
		age_ = age;
	}
	void SetAge(int age)
	{
		age_ = age;
	}
	void SetName(std::string name)
	{
		name_ = name;
	}
	int GetAge()const
	{
		return age_;
	}
	std::string GetName()const
	{
		return name_;
	}

protected:
	int age_;
	std::string name_;
	void Speaking()
	{
		std::cout << "Speaking...\n";
	}
	void Eating()
	{
		std::cout << "Eating...\n";
	}
	void Drinking()
	{
		std::cout << "Eaing...\n";
	}
	void BirthDay()
	{
		age_++;
	}


private:
};


#endif