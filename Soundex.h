//
// Created by scorpio-b on 6/2/25.
//

#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

static const size_t MaxCodeLength{4};

class Soundex
{
public:
    [[nodiscard]] static std::string encode(const std::string& word)
    {
        return zeroPad(head(word) + encodedDigits(word));
    }

private:
    [[nodiscard]] static std::string zeroPad(const std::string& word)
    {
        auto zeroNeeded = MaxCodeLength - word.length();
        return word + std::string(zeroNeeded, '0');
    }

    [[nodiscard]] static std::string head(const std::string& word)
    {
        return word.substr(0, 1);
    }

    [[nodiscard]] static std::string encodedDigits(const std::string& word)
    {
        if (word.length() > 1)
        {
            return encodedDigit(word[1]);
        }

        return "";
    }

    static std::string encodedDigit(char letter)
    {
        const std::unordered_map<char, std::string> encodings {
            {'b', "1"}, {'f', "1"}, {'p', "1"}, {'v', "1"},
            {'c', "2"}, {'g', "2"}, {'j', "2"}, {'k', "2"}, {'q', "2"}, {'s', "2"}, {'x', "2"}, {'z', "2"},
            {'d', "3"}, {'t', "3"},
            {'l', "4"},
            {'m', "5"}, {'n', "5"},
            {'r', "6"},
        };
        auto it = encodings.find(letter);
        return it == encodings.end() ? "" : it->second;
    }
};

#endif //SOUNDEX_H
