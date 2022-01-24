#ifndef __ACCOUNT__
#define __ACCOUNT__
class Account
{
public:
	static double m_rate;
	static void set_rate(const double& x) { m_rate = x; }
	Account();
	~Account();

private:

};
double Account::m_rate = 8.0;
#endif __ACCOUNT__