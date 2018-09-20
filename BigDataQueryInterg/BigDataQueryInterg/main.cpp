#include <iostream>
#include<vector>

using namespace std;
class BitSet
{
public:
	BitSet(size_t range)
	{
		_a.resize((range >>5)+ 1);
	}
	//λ��(��1)
	void Set(int num)
	{
		size_t index = num >>5;//ȷ���ǵڼ�������
		size_t pos = num % 32;//ȷ�����Ǹ�λ

		_a[index] |= (1<< pos);//��1
	}
	//λ����0����0��
	void ReSet(int num)
	{
		size_t index = num >> 5;//ȷ���ǵڼ�������
		size_t pos = num % 32;//ȷ�����Ǹ�λ
		//��ʾ��λ�õ���������
		_a[index] &= ~(1 << pos);//��0
	}
	//�ж��Ƿ����
	bool Test(int num)
	{
		size_t index = num >> 5;//������
		size_t  pos = num % 32;//��λ��
		//Ϊ1��ʾ���ڣ�Ϊ0��ʾ������
		return _a[index] &= (1 << pos);
	}
protected:
	vector<int>_a;
};

void main()
{
	BitSet bs(-1);
	bs.Set(1);
	bs.Set(8);
	bs.Set(100);
	cout << "bs?" << "bs.Set(1) " << endl;
	cout << "bs?" << "bs.Set(8) " << endl;
	cout << "bs?" << "bs.Set(100) " << endl;
	cout << "bs?" << "bs.Test(1) " << endl;
	cout << "bs?" << "bs.Test(1) " << endl;
	cout << "bs?" << "bs.Test(1) " << endl;
}
