#include <iostream>
using namespace std;



int main()
{
	//整形  short(2) ; int(2) ; long(4) ; long long(8) 
	int a = 10;
	cout << "int类型所占用的内存空间大小为"  << sizeof(a) << "个字节" << endl;


	//实形 （浮点数）   float (4)单精度>7位有效数字 ；double(8)双精度 15-16位有效数字>；
	//默认情况下，小数点后只显示6位有效数字
	float b = 3.14f; //f的作用是，直接将默认的双精度浮点数转化成单精度浮点数
	cout << "float类型所占用的内存空间大小为" << sizeof(b) << "个字节" << endl;

	//科学记数法
	float c = 3e2;//3*10^2
	cout << c << endl;
	float d = 3e-2;//3*10^-2
	cout << d << endl;
 	system("pause");

	//字符型


	return 0;

}