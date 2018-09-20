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
	//位置(置1)
	void Set(int num)
	{
		size_t index = num >>5;//确定是第几个整数
		size_t pos = num % 32;//确定在那个位

		_a[index] |= (1<< pos);//置1
	}
	//位置清0（置0）
	void ReSet(int num)
	{
		size_t index = num >> 5;//确定是第几个整数
		size_t pos = num % 32;//确定在那个位
		//表示该位置的数不存在
		_a[index] &= ~(1 << pos);//置0
	}
	//判断是否存在
	bool Test(int num)
	{
		size_t index = num >> 5;//算整数
		size_t  pos = num % 32;//算位置
		//为1表示存在，为0表示不存在
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
