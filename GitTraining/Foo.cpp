#include "Foo.h"
#include <stdio.h>

int Foo::numFoo = 0;

Foo::Foo()
{
	++numFoo;
	printf("Foo is initialized %d times.\n", numFoo);
	int a = 0;
	int b = 0;
}

Foo::Foo(int a, int b) 
{
	printf("Add %d and %d.\n", a, b);
	x = a;
	y = b;
}

int Foo::getNumFoo()
{
	return numFoo;
}

Foo::~Foo()
{
	printf("Foo is uninitialized.\n");
}
