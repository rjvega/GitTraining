#include "Foo.h"
#include <stdio.h>

Foo::Foo()
{
	printf("Foo is initialized.");
}


Foo::~Foo()
{
	printf("Foo is uninitialized.\n");
}
