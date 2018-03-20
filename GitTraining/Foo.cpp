#include "Foo.h"
#include <stdio.h>

Foo::Foo()
{
	printf("Foo is initialized.");
	int a = 0;
	int b = 0;
}

Foo::Foo(int a, int b) 
{
	x = a;
	y = b;
}

Foo::~Foo()
{
	printf("Foo is uninitialized.\n");
}
