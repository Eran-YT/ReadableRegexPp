#include "pch.h"

import ReadableRegexPp;

#include <regex>
TEST(TestReadableRegex, Any) {
	std::string created_regex = rrpp::any();
	EXPECT_EQ(created_regex, ".");
}

TEST(TestReadableRegex, Digit) {
	std::string created_regex = rrpp::digit();
	EXPECT_EQ(created_regex, "\\d");
}

TEST(TestRunReadableRegex, Digit) {
	std::regex created_regex(rrpp::digit());

	EXPECT_TRUE(std::regex_match("1", created_regex));
	EXPECT_FALSE(std::regex_match("Hello, World!", created_regex));
}