#include "Foo.h"
#include <stdio.h>

Foo::Foo()
{
	printf("Foo is initialized.\n");
	int a = 0;
	int b = 0;
}

Foo::Foo(int a, int b) 
{
	printf("Add %d and %d.\n", a, b);
	x = a;
	y = b;
}

Foo::~Foo()
{
	printf("Foo is uninitialized.\n");
}
