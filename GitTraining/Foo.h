#pragma once
class Foo
{
private:
	static int numFoo;
	int x;
	int y;

public:
	Foo();
	Foo(int a, int b);
	static int getNumFoo();
	~Foo();
};

