#include <iostream>
#include<string>
using namespace std;



int main()
{

	//算数运算符  
	int a1 = 1;
	int b1 = 2;
	cout << a1 + b1 << endl;
	cout << a1 / b1 << endl; //整数相除，依然是整数;
						   //除数不能为零
	double a2 = 3.1415;
	double b2 = 6.666;
	cout << a2 / b2 << endl;  //两个小数相除则为小数

	int a3 = 10;    //% 取模（余数）运算
	int b3 = 3;
	cout << a3 % b3 << endl;  //求余数
	//两个小数是不可以取模运算

	//前置递增 先递增，再运算
	//后置递增 先运算，再递增


	//赋值运算符 
	int c = 0;
	c += 100;
	cout << "c = "<< c << endl;
	

	//比较运算符  返回bool
	int d = 23;
	int e = 66;

	cout << (d < e) << endl; //要加括号，保证比较运算符的优先级


	//逻辑运算符
	// ！非   && 与  || 或

	int f = 1;
	int g = 0;
	cout << (f && g) << endl;  //真 与 假 = 假
	cout << !f  << endl;

	system("pause");
	return 0;

}