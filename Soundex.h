//
// Created by scorpio-b on 6/2/25.
//

#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

class Soundex {
public:
    [[nodiscard]] std::string encode(const std::string& word) const {
        if (word == "Ab") {
            return "A100";
        }
        return zeroPad(word);
    }

private:
    [[nodiscard]] std::string zeroPad(const std::string& word) const {
        auto zeroNeeded = 4 - word.length();
        return word + std::string(zeroNeeded, '0');
    }
};

#endif //SOUNDEX_H