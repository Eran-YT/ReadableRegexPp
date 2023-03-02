#include "pch.h"

import ReadableRegexPp;

#include <regex>

TEST(TestAsciiCharacterClass, Alphanumeric) {
	std::string created_regex = rrpp::alphanumeric();
	EXPECT_EQ(created_regex, "[0-9A-Za-z]");
}

TEST(TestRunAsciiCharacterClass, Alphanumeric) {
	std::regex created_regex(rrpp::alphanumeric());

	EXPECT_TRUE(std::regex_match("H", created_regex));
	EXPECT_TRUE(std::regex_match("2", created_regex));
	EXPECT_TRUE(std::regex_match("g", created_regex));
	EXPECT_FALSE(std::regex_match("!", created_regex));
}

TEST(TestAsciiCharacterClass, Alphabetic) {
	std::string created_regex = rrpp::alphabetic();
	EXPECT_EQ(created_regex, "[A-Za-z]");
}

TEST(TestRunAsciiCharacterClass, Alphabetic) {
	std::regex created_regex(rrpp::alphabetic());

	EXPECT_TRUE(std::regex_match("H", created_regex));
	EXPECT_FALSE(std::regex_match("!", created_regex));
	EXPECT_FALSE(std::regex_match("3", created_regex));
}

TEST(TestAsciiCharacterClass, Ascii) {
	std::string created_regex = rrpp::ascii();
	EXPECT_EQ(created_regex, "[\\x00-\\x7F]");
}

TEST(TestRunAsciiCharacterClass, Ascii) {
	std::regex created_regex(rrpp::ascii());

	EXPECT_TRUE(std::regex_match("H", created_regex));
	EXPECT_TRUE(std::regex_match("2", created_regex));
	EXPECT_TRUE(std::regex_match("g", created_regex));
	EXPECT_TRUE(std::regex_match("!", created_regex));
	EXPECT_FALSE(std::regex_match("\x90", created_regex));
}

TEST(TestAsciiCharacterClass, Blank) {
	std::string created_regex = rrpp::blank();
	EXPECT_EQ(created_regex, "[\\t ]");
}

TEST(TestRunAsciiCharacterClass, Blank) {
	std::regex created_regex(rrpp::blank());

	EXPECT_TRUE(std::regex_match(" ", created_regex));
	EXPECT_TRUE(std::regex_match("\t", created_regex));
	EXPECT_FALSE(std::regex_match("a", created_regex));
	EXPECT_FALSE(std::regex_match("!", created_regex));
}

TEST(TestAsciiCharacterClass, Control) {
	std::string created_regex = rrpp::control();
	EXPECT_EQ(created_regex, "[\\x00-\\x1F\\x7F]");
}

TEST(TestRunAsciiCharacterClass, Control) {
	std::regex created_regex(rrpp::control());

	EXPECT_TRUE(std::regex_match("\r", created_regex));
	EXPECT_TRUE(std::regex_match("\n", created_regex));
	EXPECT_TRUE(std::regex_match("\x7f", created_regex));
	EXPECT_FALSE(std::regex_match("a", created_regex));
	EXPECT_FALSE(std::regex_match("N", created_regex));
	EXPECT_FALSE(std::regex_match("1", created_regex));
	EXPECT_FALSE(std::regex_match("!", created_regex));
}

TEST(TestAsciiCharacterClass, Graphical) {
	std::string created_regex = rrpp::graphical();
	EXPECT_EQ(created_regex, "[!-~]");
}

TEST(TestRunAsciiCharacterClass, Graphical) {
	std::regex created_regex(rrpp::graphical());

	EXPECT_TRUE(std::regex_match("H", created_regex));
	EXPECT_TRUE(std::regex_match("2", created_regex));
	EXPECT_TRUE(std::regex_match("g", created_regex));
	EXPECT_FALSE(std::regex_match(" ", created_regex));
	EXPECT_FALSE(std::regex_match("\x10", created_regex));
}

TEST(TestAsciiCharacterClass, Uppercase) {
	std::string created_regex = rrpp::uppercase();
	EXPECT_EQ(created_regex, "[A-Z]");
}

TEST(TestRunAsciiCharacterClass, Uppercase) {
	std::regex created_regex(rrpp::uppercase());

	EXPECT_TRUE(std::regex_match("H", created_regex));
	EXPECT_FALSE(std::regex_match("!", created_regex));
	EXPECT_FALSE(std::regex_match("a", created_regex));
	EXPECT_FALSE(std::regex_match("2", created_regex));
}

TEST(TestAsciiCharacterClass, Printable) {
	std::string created_regex = rrpp::printable();
	EXPECT_EQ(created_regex, "[ -~]");
}

TEST(TestRunAsciiCharacterClass, Printable) {
	std::regex created_regex(rrpp::printable());

	EXPECT_TRUE(std::regex_match("H", created_regex));
	EXPECT_TRUE(std::regex_match("2", created_regex));
	EXPECT_TRUE(std::regex_match("g", created_regex));
	EXPECT_TRUE(std::regex_match("!", created_regex));
	EXPECT_FALSE(std::regex_match("\x80", created_regex));
}

TEST(TestAsciiCharacterClass, Punctuation) {
	std::string created_regex = rrpp::punctuation();
	EXPECT_EQ(created_regex, "[!-/:-@\\[-`{-~]");
}

TEST(TestRunAsciiCharacterClass, Punctuation) {
	std::regex created_regex(rrpp::punctuation());

	EXPECT_TRUE(std::regex_match("!", created_regex));
	EXPECT_TRUE(std::regex_match("-", created_regex));
	EXPECT_TRUE(std::regex_match("\\", created_regex));
	EXPECT_FALSE(std::regex_match("a", created_regex));
	EXPECT_FALSE(std::regex_match("1", created_regex));
	EXPECT_FALSE(std::regex_match("K", created_regex));
}

TEST(TestAsciiCharacterClass, Lowercase) {
	std::string created_regex = rrpp::lowercase();
	EXPECT_EQ(created_regex, "[a-z]");
}

TEST(TestRunAsciiCharacterClass, Lowercase) {
	std::regex created_regex(rrpp::lowercase());

	EXPECT_TRUE(std::regex_match("h", created_regex));
	EXPECT_FALSE(std::regex_match("!", created_regex));
	EXPECT_FALSE(std::regex_match("1", created_regex));
	EXPECT_FALSE(std::regex_match("H", created_regex));
}

TEST(TestAsciiCharacterClass, Hexdigit) {
	std::string created_regex = rrpp::hexdigit();
	EXPECT_EQ(created_regex, "[0-9A-Fa-f]");
}

TEST(TestRunAsciiCharacterClass, Hexdigit) {
	std::regex created_regex(rrpp::hexdigit());

	EXPECT_TRUE(std::regex_match("0", created_regex));
	EXPECT_TRUE(std::regex_match("9", created_regex));
	EXPECT_TRUE(std::regex_match("a", created_regex));
	EXPECT_TRUE(std::regex_match("f", created_regex));
	EXPECT_FALSE(std::regex_match("g", created_regex));
	EXPECT_FALSE(std::regex_match("!", created_regex));
}