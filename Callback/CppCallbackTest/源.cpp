//参考文章:https://blog.csdn.net/clirus/article/details/50350519
#include <iostream>

using namespace std;

//class base
//{
//public:
//	static int func1() 
//	{
//		return 0;
//	};
//	int func2() 
//	{
//		return 0;
//	};
//
//	static void func3()
//	{
//		return ;
//	};
//	void func4()
//	{
//		return ;
//	};
//};
//
//int main()
//{
//	int(*pf1)() = &base::func1;
//	int (base::*pf2)() = &base::func2;
//
//	//
//	//int(*pf3)() = &base::func2;不可以这样转换，因为存在this指针
//
//	void (*pf3)() = &base::func3;
//
//	//void(  * pf4)() = &base::func4;//不可以进行初始化
//	//void* pf5 = &base::func4;
//	return 0;
//}



typedef struct
{
	int aa;
	int bb;
}testMsgType;

// 回调函数指针定义 void*用来保存this指针
typedef int(*ptestCB)(testMsgType *, void *);
ptestCB m_test; // 保存回调函数地址
void* m_kk;// 保存this指针
		   // 回调函数
int setCBTest(ptestCB pf, void * kk)
{
	printf("wei....... set cb ok!!!\n");
	m_test = pf;
	m_kk = kk;
	return 0;
}

int main()
{
	printf("cb func !!!\n");
	testMsgType* type = new testMsgType;
	setCBTest(m_test, m_kk);
	m_test(type, m_kk); // 调用回调函数
	return 0;
}

