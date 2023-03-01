#include "pch.h"

import ReadableRegexPp;

TEST(TestReadableRegex, Any) {
	std::string created_regex = rrpp::any();
	EXPECT_EQ(created_regex, ".");
}