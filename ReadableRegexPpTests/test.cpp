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

TEST(TestReadableRegex, NonDigit) {
	std::string created_regex = rrpp::non_digit();
	EXPECT_EQ(created_regex, "\\D");
}

TEST(TestReadableRegex, Whitespace) {
	std::string created_regex = rrpp::whitespace();
	EXPECT_EQ(created_regex, "\\s");
}

TEST(TestReadableRegex, NonWhitespace) {
	std::string created_regex = rrpp::non_whitespace();
	EXPECT_EQ(created_regex, "\\S");
}

TEST(TestReadableRegex, Word) {
	std::string created_regex = rrpp::word();
	EXPECT_EQ(created_regex, "\\w");
}

TEST(TestReadableRegex, NonWord) {
	std::string created_regex = rrpp::non_word();
	EXPECT_EQ(created_regex, "\\W");
}

TEST(TestRunReadableRegex, Digit) {
	std::regex created_regex(rrpp::digit());

	EXPECT_TRUE(std::regex_match("1", created_regex));
	EXPECT_FALSE(std::regex_match("Hello, World!", created_regex));
}

TEST(TestRunReadableRegex, Whitespace) {
	std::regex created_regex(rrpp::whitespace());

	EXPECT_TRUE(std::regex_match(" ", created_regex));
	EXPECT_FALSE(std::regex_match("Hello", created_regex));
}

TEST(TestRunReadableRegex, Word) {
	std::regex created_regex(rrpp::word());

	EXPECT_TRUE(std::regex_match("H", created_regex));
	EXPECT_FALSE(std::regex_match("123", created_regex));
}

TEST(TestReadableRegexComposition, Simple) {
	std::regex created_regex(rrpp::digit() + rrpp::any());

	EXPECT_TRUE(std::regex_match("1!", created_regex));
	EXPECT_TRUE(std::regex_match("1h", created_regex));
}