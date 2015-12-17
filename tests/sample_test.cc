#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../some.h"

TEST (TestTest, Foo) {
	ASSERT_EQ (0, 0);
}

TEST (TestTest, Some) {
	Some some(3);
	ASSERT_EQ (some.get_foo(), 3);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
