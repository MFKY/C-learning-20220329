#include <iostream>
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
 	system("pause");

	//�ַ���


	return 0;

}