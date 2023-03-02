module;

#include <string>

export module ReadableRegexPp;

namespace rrpp
{
	export constexpr std::string any()
	{
		return ".";
	}

	// vvv Perl Character Classes vvv

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

	// ^^^ Perl Character Classes ^^^

	// vvv ASCII Character Classes vvv

	export constexpr std::string alphanumeric()
	{
		return "[0-9A-Za-z]";
	}

	export constexpr std::string alphabetic()
	{
		return "[A-Za-z]";
	}

	export constexpr std::string ascii()
	{
		return "[\\x00-\\x7F]";
	}
	
	export constexpr std::string blank()
	{
		return "[\\t ]";
	}
	
	export constexpr std::string control()
	{
		return "[\\x00-\\x1F\\x7F]";
	}
	
	export constexpr std::string graphical()
	{
		return "[!-~]";
	}
	
	export constexpr std::string uppercase()
	{
		return "[A-Z]";
	}
	
	export constexpr std::string printable()
	{
		return "[ -~]";
	}
	
	export constexpr std::string punctuation()
	{
		return "[!-/:-@\\[-`{-~]";
	}
	
	export constexpr std::string lowercase()
	{
		return "[a-z]";
	}
	
	export constexpr std::string hexdigit()
	{
		return "[0-9A-Fa-f]";
	}

	// ^^^ ASCII Character Classes ^^^
}
