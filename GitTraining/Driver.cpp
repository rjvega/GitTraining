#include <stdio.h>
#include "Foo.h"

int main() {
	Foo *foo = new Foo();
	Foo add(8, 7);
	delete foo;

	Foo foo1;
	Foo foo2;

	printf("Foo was called %d times.", Foo::getNumFoo());
	return 0;
}