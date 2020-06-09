/*
#include <iostream>
#include <math.h>
using namespace std;

#include "Exp.h"

Exp::Exp() : base(1), jisu(1) {}
Exp::Exp(int base) : base(base), jisu(1) {}
Exp::Exp(int base, int jisu) : base(base), jisu(jisu) {}

int Exp::getValue() {
	return pow(base, jisu);
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return jisu;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}
*/