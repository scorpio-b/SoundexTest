//
// Created by scorpio-b on 6/2/25.
//

#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

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

#endif //SOUNDEX_H