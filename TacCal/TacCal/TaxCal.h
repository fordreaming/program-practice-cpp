#pragma once

class TaxCal
{
public:
	TaxCal(void);
	~TaxCal(void);

	void CalculateTax(int tax);
	//���ټ���ֵ
	void QuickSub(int tax);
public:
	double m_remain;
	double m_quickSub;//���ټ�ȥֵ
	int m_taxLevel;//˰���ڵȼ�
	double m_taxRat;
	
};
