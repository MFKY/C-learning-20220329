#include <iostream>
using namespace std;

#define Week 7 //宏常量不要加；号



int main()
{
	int a = 10;  //创建变量
	const int year = 365; //用 const 创建常量
	cout << "a = " << a << endl;
	cout << "一周有" <<  Week  << "天" << endl;
	cout << "一年有" << year << "天" << endl;
	cout << "blablbla" << endl ;
	system("pause");

	return 0;

}
