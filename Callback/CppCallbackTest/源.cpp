//�ο�����:https://blog.csdn.net/clirus/article/details/50350519
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
//	//int(*pf3)() = &base::func2;����������ת������Ϊ����thisָ��
//
//	void (*pf3)() = &base::func3;
//
//	//void(  * pf4)() = &base::func4;//�����Խ��г�ʼ��
//	//void* pf5 = &base::func4;
//	return 0;
//}



typedef struct
{
	int aa;
	int bb;
}testMsgType;

// �ص�����ָ�붨�� void*��������thisָ��
typedef int(*ptestCB)(testMsgType *, void *);
ptestCB m_test; // ����ص�������ַ
void* m_kk;// ����thisָ��
		   // �ص�����
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
	m_test(type, m_kk); // ���ûص�����
	return 0;
}

