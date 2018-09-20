#ifndef MY_MATH_FUNCS_H__
#define MY_MATH_FUNCS_H__

// MathFuncsDll.h

//注意导入和导出，直接调用该函数会被认为导出
//#ifdef MATHFUNCSDLL_EXPORTS
//#define MATHFUNCSDLL_API __declspec(dllexport) 
//#include "MyMathFuncs.h"
//#else
//#define MATHFUNCSDLL_API __declspec(dllimport) 
//#endif
namespace MathFuncs
{
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs
	{
	public: 
		// Returns a + b
		static MATHFUNCSDLL_API double Add(double a, double b); 

		// Returns a - b
		static MATHFUNCSDLL_API double Subtract(double a, double b); 

		// Returns a * b
		static MATHFUNCSDLL_API double Multiply(double a, double b); 

		// Returns a / b
		// Throws const std::invalid_argument& if b is 0
		static MATHFUNCSDLL_API double Divide(double a, double b); 
	};
}
#endif