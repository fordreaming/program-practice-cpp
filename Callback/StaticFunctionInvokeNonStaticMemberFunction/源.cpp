#include<iostream>
using namespace std;
class Myclass
{
private:
	int		m;	    //　非静态数据成员
	static	int	n;	//　静态数据成员
public:
	Myclass();	//　构造函数
	static	int	getn(Myclass a);	// 静态成员函数
	static Myclass * Pthis;//声明指针，需要在类外进行定义

};

Myclass *Myclass ::Pthis;//静态指针定义

Myclass::Myclass()
{
	m = 10;
	Pthis = this;//指向自身
}
int	Myclass::getn(Myclass a)

{
	//cout << a.m << endl;	// 通过类间接使用  非静态数据成员
	cout << Pthis->m << endl;
	return n;				// 直接使用  静态数据成员
}
int	Myclass::n = 100;	// 静态数据成员初始化

void main()
{
	Myclass app1;
	cout << app1.getn(app1) << endl;	    // 利用对象引用静态函数成员
	cout << Myclass::getn(app1) << endl;	// 利用类名引用静态函数成员

}