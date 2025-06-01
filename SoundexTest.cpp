//
// Created by scorpio-b on 5/31/25.
//

#include "gmock/gmock.h"
#include <string>
using ::testing::Eq;

class Soundex
{
public:
    std::string encode(const std::string& word) const
    {
        return zeroPad(word);
    }

private:
    std::string zeroPad(const std::string& word) const
    {
        return word + "000";
    }
};

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord)
{
    Soundex soundex;
    auto encoded = soundex.encode("A");
    ASSERT_THAT(encoded, Eq("A000"));
}
