#include<iostream>
using namespace std;
class Myclass
{
private:
	int		m;	    //���Ǿ�̬���ݳ�Ա
	static	int	n;	//����̬���ݳ�Ա
public:
	Myclass();	//�����캯��
	static	int	getn(Myclass a);	// ��̬��Ա����
	static Myclass * Pthis;//����ָ�룬��Ҫ��������ж���

};

Myclass *Myclass ::Pthis;//��ָ̬�붨��

Myclass::Myclass()
{
	m = 10;
	Pthis = this;//ָ������
}
int	Myclass::getn(Myclass a)

{
	//cout << a.m << endl;	// ͨ������ʹ��  �Ǿ�̬���ݳ�Ա
	cout << Pthis->m << endl;
	return n;				// ֱ��ʹ��  ��̬���ݳ�Ա
}
int	Myclass::n = 100;	// ��̬���ݳ�Ա��ʼ��

void main()
{
	Myclass app1;
	cout << app1.getn(app1) << endl;	    // ���ö������þ�̬������Ա
	cout << Myclass::getn(app1) << endl;	// �����������þ�̬������Ա

}