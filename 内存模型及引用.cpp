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
//bool类型只占1个字节的大小  只要是非零的值都为真
//输出函数为cout<<" "<<endl
//输入函数为cin>> 

//非全局区  局部变量 const修饰的局部变量（局部常量）
//全局区    全局变量 静态变量 （static关键字） 常量：字符串常量，const修饰的全局变量（全局常量）
//静态变量 不会随着函数的调用和返回而发生变化  值是可以更改的
//const修饰的常变量 值不可以改变

//栈区的注意事项 不要返回局部变量的地址
//#include<iostream>
//using namespace std;
//int* func()
//{
//	int a = 10;//局部变量a存放在栈区 函数使用完毕自动销毁空间
//	return &a;
//}
//int main()
//{
//	int* p;
//	p = func();
//	cout << *p << endl;
//	cout << *p << endl;//无法打印出10 因为a已经被销毁
//	cout << *p << endl;
//	return 0;
//}

//局部变量以及函数中的形参 保存到栈区

//c++中使用new函数开辟内存 new int（） 括号里是值  释放内存用delete
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
//利用new开辟内存数据存储到堆区
//针也是变量 存放到栈区 但是指针指向的数据存放到堆区

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

//引用：给变量起别名
//语法  数据类型 &别名=原名
//int a = 10;
//int& b = a;
//b = 20;
//cout << a << endl;
//输出结果为20

//引用必须要初始化
//引用一旦初始化后，就不可以更改了 b是a的别名后，就不能改为c的别名
//函数传参时，可以利用引用的技术让形参修饰实参  可以简化指针修改实参

//交换参数
//#include<iostream>
//using namespace std;
//void myswap1(int a, int b)//值传递
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void myswap2(int* a, int* b)//地址传递
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
//引用做函数的返回值
//1、引用不要返回局部变量的引用
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
//	cout << ref << endl;//ref是a指向的空间 已经被销毁 但编译器进行了保留
//	cout << ref << endl;
//	return 0;
//}
//2、函数的调用可以作为左值
//#include<iostream>
//using namespace std;
//int& test02()
//{
//	static int a = 10;//静态变量 存放在全局区 不会被销毁
//	return a;
//}
//int main()
//{
//	int& ref = test02();
//
//	cout << ref <<"\n" << endl;
//	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
//	cout << ref << endl;
//	return 0;
//}

//引用的本质是一个指针常量
// int &ref=a； 自动转化为 int* const ref=&a;
//ref=20;自动转化为 *ref=20;

//常量引用 主要用来修饰形参，防止误操作
//int& ref = 10;//错误，引用必须引一块合法内存
//const int& ref = 10;//正确 加上const后 编译器将代码修改 int temp=10; const int &ref=temp;
//在函数形参列表中，可以加const修饰形参，防止形参改变实参
#include<iostream>
using namespace std;
//打印函数
void showvalue(const int& a)
{
	//a = 1000;//将实参修改了
	cout << a << endl;
}
int main()
{
	int a = 100;
	showvalue(a);
	cout << a << endl;
	return 0;

}