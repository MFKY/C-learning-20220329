#include <iostream>
#include<string>
using namespace std;



int main()
{
	//����  short(2) ; int(2) ; long(4) ; long long(8) 
	int a = 10;
	cout << "int������ռ�õ��ڴ�ռ��СΪ"  << sizeof(a) << "���ֽ�" << endl;


	//ʵ�� ����������   float (4)������>7λ��Ч���� ��double(8)˫���� 15-16λ��Ч����>��
	//Ĭ������£�С�����ֻ��ʾ6λ��Ч����
	float b = 3.14f; //f�������ǣ�ֱ�ӽ�Ĭ�ϵ�˫���ȸ�����ת���ɵ����ȸ�����
	cout << "float������ռ�õ��ڴ�ռ��СΪ" << sizeof(b) << "���ֽ�" << endl;

	//��ѧ������
	float c = 3e2;//3*10^2
	cout << c << endl;
	float d = 3e-2;//3*10^-2
	cout << d << endl;
 	

	//�ַ��� char ������ = 'x'
	char name = 'b';//����������ֻ��дһ���ַ�
	char sex = 'B';
	cout <<  name << endl;
	cout << "char���ڴ��СΪ" << sizeof(char) << endl;
	
	//ʹ���ַ��͵ĳ�������
	//1�������ַ��ͱ�����Ҫ�õ�����
	//2���ַ��ͱ�������������ֻ�ܷ�һ���ַ�

	//�鿴�ַ��ͱ�����ASCII����
	cout << (int)name << endl;  //��nameǿ��ת����int���ͣ�����������ַ���ASCII��
	cout << (int)sex << endl;
	// a -> 97 A ->65  b->98 B->66



	//ת���ַ�  \n ���з� \t �Ʊ�� \\��б��
	char one = 'a';
	char two = 'b';
	cout << one << "\n" << two << endl;
	//ˮƽ�Ʊ�� ���������ʱ���� *ռ��8��λ��
	cout << "kaiyuan\t19950927" << endl;
	cout << "ky\t19950927" << endl;
	cout << "yky\t19950927" << endl;


	//C����ַ�����   char ������[] = "xxxxxxxx"  �����ź�˫����
	//C++����ַ�����   string ������ = "xxxxxx"  *Ҫ����ͷ�ļ� #include<string>

	char str1[] = "hello world";
	cout << str1 << endl;

	string str2 = "Hello world";
	cout << str2 << endl;

	//bool  ��������
	//ռ��һ���ֽڴ�С  true 1  false 0
	bool flag = true;
	cout << flag << endl;
	cout << sizeof(flag) << endl;

	//���ݵ����� �Ӽ��̻�ȡ cin >> ����
	int e = 0;
	cout << "�������e��ֵ" << endl;
	cin >> e;
	cout << e << endl;

	//����ע�� CTRL + K + C
	system("pause");

	return 0;

}