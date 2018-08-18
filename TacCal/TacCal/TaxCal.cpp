#include "TaxCal.h"
#include <assert.h>

enum Taxlevel
{
	LevelOne = 1,
	LevelTwo,
	LevelThree
};

enum TaxNum
{
	LevelOneTaxNum = 1500,
	LevelTwoTaxNum = 4500,
	LevelThreeTaxNum = 9000
};



//enum TaxRate
//{
//	LeveLOneRate = 3%,
//	LeveLTwoRate = 10%;
//	LeveLThreeRate = 15%;
//};

static double levelOneRate = 0.03;
static double levelTwoRate = 0.1;
static double levelThreeRate = 0.2;

TaxCal::TaxCal(void)
{
}

TaxCal::~TaxCal(void)
{

}

void TaxCal::CalculateTax(int salary)
{
	assert(salary >= 0);
	int tempSalary = salary -3000;
	if (tempSalary <= 1500)
	{
		QuickSub(LevelOne);
		m_remain = salary - tempSalary*levelOneRate + m_quickSub;
	}
	else if (tempSalary <= 3000)
	{
		QuickSub(LevelTwo);
		m_remain = salary - tempSalary*levelTwoRate + m_quickSub;
	}
	else
	{
		QuickSub(LevelThree);
		m_remain = salary - tempSalary*levelThreeRate + m_quickSub;
	}
	
}

void TaxCal::QuickSub(int level)
{
	switch(level)
	{
		case LevelOne:
			m_quickSub = 0;
			break;
		case LevelTwo:
			m_quickSub = 1500*(levelTwoRate - levelOneRate);
			break;
		case LevelThree:
			m_quickSub = 1500*(levelTwoRate - levelOneRate) + 4500*(levelThreeRate - levelTwoRate);
			break;
		default:
			break;
	}
}
