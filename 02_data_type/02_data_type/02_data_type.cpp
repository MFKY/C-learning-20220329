#include <iostream>
#include<string>
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
 	

	//字符型 char 变量名 = 'x'
	char name = 'b';//单引号里面只能写一个字符
	char sex = 'B';
	cout <<  name << endl;
	cout << "char的内存大小为" << sizeof(char) << endl;
	
	//使用字符型的常见错误
	//1、创建字符型变量需要用单引号
	//2、字符型变量，单引号内只能放一个字符

	//查看字符型变量的ASCII编码
	cout << (int)name << endl;  //将name强制转换成int整型，输出他代表字符的ASCII码
	cout << (int)sex << endl;
	// a -> 97 A ->65  b->98 B->66



	//转义字符  \n 换行符 \t 制表符 \\反斜杠
	char one = 'a';
	char two = 'b';
	cout << one << "\n" << two << endl;
	//水平制表符 有助于输出时对其 *占据8个位置
	cout << "kaiyuan\t19950927" << endl;
	cout << "ky\t19950927" << endl;
	cout << "yky\t19950927" << endl;


	//C风格字符串型   char 变量名[] = "xxxxxxxx"  中括号和双引号
	//C++风格字符串型   string 变量名 = "xxxxxx"  *要包含头文件 #include<string>

	char str1[] = "hello world";
	cout << str1 << endl;

	string str2 = "Hello world";
	cout << str2 << endl;

	//bool  布尔类型
	//占用一个字节大小  true 1  false 0
	bool flag = true;
	cout << flag << endl;
	cout << sizeof(flag) << endl;

	//数据的输入 从键盘获取 cin >> 变量
	int e = 0;
	cout << "请给整型e赋值" << endl;
	cin >> e;
	cout << e << endl;

	//批量注释 CTRL + K + C
	system("pause");

	return 0;

}