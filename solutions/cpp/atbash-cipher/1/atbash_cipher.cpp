#include "atbash_cipher.h"
#include <string>
#include <cctype>

namespace atbash_cipher {

    std::string encode(std::string text) {
        std::string encoded;
        int count{0};
        for (std::string::size_type i{0}; i < text.length(); i++) {
            text[i] = std::tolower(text[i]);
            if (!std::isalnum(text[i])) continue; 
            else if (text[i] >= 'a' && text[i] <= 'z') {
                encoded += 'a' + ('z' - text[i]);
                count++;
            } 
            else {
                encoded += text[i];
                count ++;
            }
            if (count != 0 && count % 5 == 0) encoded += ' ';
        }
        if (!encoded.empty() && encoded.back() == ' ') {
            encoded.pop_back(); 
        }
        return encoded;
    }
    
    std::string decode(std::string text) {
        std::string decoded;
        int count{0};
        for (std::string::size_type i{0}; i < text.length(); i++) {
            text[i] = std::tolower(text[i]);
            if (!std::isalnum(text[i])) continue; 
            else if (text[i] >= 'a' && text[i] <= 'z') {
                decoded += 'a' + ('z' - text[i]);
                count++;
            } 
            else {
                decoded += text[i];
                count ++;
            }
        }
        return decoded;
    }

}  // namespace atbash_cipher