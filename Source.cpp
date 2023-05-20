#include <iostream>

using namespace std;
class Litrature {
public:
	void InfoLit() {
		cout << " Literature help will help you \n learn a lot of information about \n poets about their poems about their \n stories, and in this way you can \n penetrate into their stories with \n their deep meaning" << endl;
	}
};
class History {
public:
	void InfoHis() {
		cout << " History will remind you of the \n past of your ancestors and you will \n not repeat their mistakes" << endl;
	}
};
class Math {
public:
	void InfoMath() {
		cout << " Mathematics is needed always \n and everywhere, because without \n calculations we stood still" << endl;
	}
};
class Info : public Litrature, public Math, public History {
public:
	
};
class Subject {
public:
	virtual int exp4();
};
int main() 
{
	Info exp5;
	cout << "     History" << endl;
	exp5.InfoHis();
	cout << "     Literature" << endl;
	exp5.InfoLit();
	cout << "     Math" << endl;
	exp5.InfoMath();


	return 0;
}