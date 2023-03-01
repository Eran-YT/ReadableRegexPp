module;

#include <string>

export module ReadableRegexPp;

namespace rrpp
{
	export constexpr std::string any()
	{
		return ".";
	}

	export constexpr std::string digit()
	{
		return "\\d";
	}
}
