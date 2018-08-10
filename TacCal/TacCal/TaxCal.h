#pragma once

class TaxCal
{
public:
	TaxCal(void);
	~TaxCal(void);

	void CalculateTax(int tax);
	//快速减法值
	void QuickSub(int tax);
public:
	double m_remain;
	double m_quickSub;//快速减去值
	int m_taxLevel;//税所在等级
	double m_taxRat;
	
};
