#include <stdio.h>
#include "Foo.h"

int main() {
	Foo *foo = new Foo();
	Foo add(8, 7);
	delete foo;

	return 0;
}