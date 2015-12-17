#include "Arduino.h"
#include "some.h"

Some::Some(int foo) {
	_foo = foo;
}

int Some::get_foo() {
	return _foo;
}
