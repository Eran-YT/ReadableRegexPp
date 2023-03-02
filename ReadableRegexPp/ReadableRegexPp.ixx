module;

#include <string>

export module ReadableRegexPp;

namespace rrpp
{
	export constexpr std::string any()
	{
		return ".";
	}

	// vvv Character classes vvv

	export constexpr std::string digit()
	{
		return "\\d";
	}

	export constexpr std::string non_digit()
	{
		return "\\D";
	}

	export constexpr std::string whitespace()
	{
		return "\\s";
	}
	
	export constexpr std::string non_whitespace()
	{
		return "\\S";
	}

	export constexpr std::string word()
	{
		return "\\w";
	}

	export constexpr std::string non_word()
	{
		return "\\W";
	}

	// ^^^ Character classes ^^^

}
