// test-dll.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"

#include "test-dll.h"
#include <iostream>

void HelloDLL(void)
{
	std::cout << "test dll." << std::endl;
}