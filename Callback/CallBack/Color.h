//
//回调有两个重点问题。
//1.函数指针
//2.类静态函数调用成员方法

#pragma once
#include <string>

using namespace::std;

typedef void (* COLOR_CALL_BACK)(string color);
static COLOR_CALL_BACK TEST;

class Color
{
public:
    Color();
    ~Color();
    void RegisterColorCallback(COLOR_CALL_BACK callback)
    {
        ColorListener = callback;
    }

public:
    void SetColor(string color);
private:
    COLOR_CALL_BACK ColorListener;
};