#pragma once

class Counter
{
public:
	Counter(int x);
	void increase();
	void reduce();
	void show();
private:
	int n;
};