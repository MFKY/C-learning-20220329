#include <iostream>
#include<string>
using namespace std;



int main()
{

	//���������  
	int a1 = 1;
	int b1 = 2;
	cout << a1 + b1 << endl;
	cout << a1 / b1 << endl; //�����������Ȼ������;
						   //��������Ϊ��
	double a2 = 3.1415;
	double b2 = 6.666;
	cout << a2 / b2 << endl;  //����С�������ΪС��

	int a3 = 10;    //% ȡģ������������
	int b3 = 3;
	cout << a3 % b3 << endl;  //������
	//����С���ǲ�����ȡģ����

	//ǰ�õ��� �ȵ�����������
	//���õ��� �����㣬�ٵ���


	//��ֵ����� 
	int c = 0;
	c += 100;
	cout << "c = "<< c << endl;
	

	//�Ƚ������  ����bool
	int d = 23;
	int e = 66;

	cout << (d < e) << endl; //Ҫ�����ţ���֤�Ƚ�����������ȼ�


	//�߼������
	// ����   && ��  || ��

	int f = 1;
	int g = 0;
	cout << (f && g) << endl;  //�� �� �� = ��
	cout << !f  << endl;

	system("pause");
	return 0;

}