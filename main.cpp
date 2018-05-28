#include "test-dll\test-dll.h"
#include "test-lib\test-lib.h"

#include <iostream>

int main(void)
{
	HelloDLL();
	HelloLib();

	rewind(stdin);
	getchar();

	return 0;
}