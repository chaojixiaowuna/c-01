//#include<iostream>
//using namespace std;
//int main()
//{
//	int a ;
//	bool flag = true;
//	char c;
//	string l;
//	cout<<"hello world!\n"<<"liwu" << endl;
//	cin >> a;
//	cin >> c;
//	cin >> l;
//
//	cout << a << flag << endl;
//	cout << sizeof(a) << sizeof(flag) << endl;
//	cout << c << l << endl;
//	return 0;
//}
//bool����ֻռ1���ֽڵĴ�С  ֻҪ�Ƿ����ֵ��Ϊ��
//�������Ϊcout<<" "<<endl
//���뺯��Ϊcin>> 

//��ȫ����  �ֲ����� const���εľֲ��������ֲ�������
//ȫ����    ȫ�ֱ��� ��̬���� ��static�ؼ��֣� �������ַ���������const���ε�ȫ�ֱ�����ȫ�ֳ�����
//��̬���� �������ź����ĵ��úͷ��ض������仯  ֵ�ǿ��Ը��ĵ�
//const���εĳ����� ֵ�����Ըı�

//ջ����ע������ ��Ҫ���ؾֲ������ĵ�ַ
//#include<iostream>
//using namespace std;
//int* func()
//{
//	int a = 10;//�ֲ�����a�����ջ�� ����ʹ������Զ����ٿռ�
//	return &a;
//}
//int main()
//{
//	int* p;
//	p = func();
//	cout << *p << endl;
//	cout << *p << endl;//�޷���ӡ��10 ��Ϊa�Ѿ�������
//	cout << *p << endl;
//	return 0;
//}

//�ֲ������Լ������е��β� ���浽ջ��

//c++��ʹ��new���������ڴ� new int���� ��������ֵ  �ͷ��ڴ���delete
//#include<iostream>
//using namespace std;
//int* func(int* a)
//{
//	a = new int(10);
//	return a;
//}
//int main()
//{
//	int a = 4;
//	a=*func(&a);
//	cout << a << endl;
//	return 0;
//}
//����new�����ڴ����ݴ洢������
//��Ҳ�Ǳ��� ��ŵ�ջ�� ����ָ��ָ������ݴ�ŵ�����

//#include<iostream>
//using namespace std;
//int* func()
//{
//	int* p = new int(10);
//	return p;
//}
//void test()
//{
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 5;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<arr[i]<<endl;
//
//	}
//	delete[] arr;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl; 
//	cout << *p << endl;
//
//	test();
//	//delete p;
//	//cout << *p << endl;
//	return 0;
//}

//���ã������������
//�﷨  �������� &����=ԭ��
//int a = 10;
//int& b = a;
//b = 20;
//cout << a << endl;
//������Ϊ20

//���ñ���Ҫ��ʼ��
//����һ����ʼ���󣬾Ͳ����Ը����� b��a�ı����󣬾Ͳ��ܸ�Ϊc�ı���
//��������ʱ�������������õļ������β�����ʵ��  ���Լ�ָ���޸�ʵ��

//��������
//#include<iostream>
//using namespace std;
//void myswap1(int a, int b)//ֵ����
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void myswap2(int* a, int* b)//��ַ����
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//
//}
//void myswap3(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 5;
//	int b = 10;
//	myswap3(a, b);
//	// myswap2(&a,&b);
//	//myswap1(a, b);
//	cout <<a<<"\n"<< b << endl;
//	return 0;
//}
//�����������ķ���ֵ
//1�����ò�Ҫ���ؾֲ�����������
//#include<iostream>
//using namespace std;
//
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//int main()
//{
//	int& ref = test01();
//	cout << ref << endl;//ref��aָ��Ŀռ� �Ѿ������� �������������˱���
//	cout << ref << endl;
//	return 0;
//}
//2�������ĵ��ÿ�����Ϊ��ֵ
//#include<iostream>
//using namespace std;
//int& test02()
//{
//	static int a = 10;//��̬���� �����ȫ���� ���ᱻ����
//	return a;
//}
//int main()
//{
//	int& ref = test02();
//
//	cout << ref <<"\n" << endl;
//	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//	cout << ref << endl;
//	return 0;
//}

//���õı�����һ��ָ�볣��
// int &ref=a�� �Զ�ת��Ϊ int* const ref=&a;
//ref=20;�Զ�ת��Ϊ *ref=20;

//�������� ��Ҫ���������βΣ���ֹ�����
//int& ref = 10;//�������ñ�����һ��Ϸ��ڴ�
//const int& ref = 10;//��ȷ ����const�� �������������޸� int temp=10; const int &ref=temp;
//�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��
#include<iostream>
using namespace std;
//��ӡ����
void showvalue(const int& a)
{
	//a = 1000;//��ʵ���޸���
	cout << a << endl;
}
int main()
{
	int a = 100;
	showvalue(a);
	cout << a << endl;
	return 0;

}