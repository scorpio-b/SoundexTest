//
// Created by scorpio-b on 5/31/25.
//

#include "gmock/gmock.h"
#include <string>
using namespace testing;

class Soundex {
public:
    [[nodiscard]] std::string encode(const std::string& word) const
    {
        return zeroPad(word);
    }

private:
    [[nodiscard]] std::string zeroPad(const std::string& word) const
    {
        return word + "000";
    }
};

class SoundexEncoding : public Test
{
public:
    Soundex soundex;
};

TEST_F(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
    ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZeroToEnsureThreeDigits) {
    ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}
