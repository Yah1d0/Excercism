#include "protein_translation.h"
#include <vector>
#include <string>
#include <unordered_map>

namespace protein_translation {

std::unordered_map<std::string, std::string> translate_table {
    {"AUG", "Methionine"},
    {"UUU", "Phenylalanine"},
    {"UUC", "Phenylalanine"},
    {"UUA", "Leucine"},
    {"UUG", "Leucine"},
    {"UCU", "Serine"},
    {"UCC", "Serine"},
    {"UCA", "Serine"},
    {"UCG", "Serine"},
    {"UAU", "Tyrosine"},
    {"UAC", "Tyrosine"},
    {"UGU", "Cysteine"},
    {"UGC", "Cysteine"},
    {"UGG", "Tryptophan"},
    {"UAA", "STOP"},
    {"UAG", "STOP"},
    {"UGA", "STOP"}
};

std::vector<std::string> proteins(std::string RNA) {
    std::vector<std::string> translated;
    for (size_t i{0}; i < RNA.length(); i += 3) {
        std::string codon;
        size_t j = i;
        while (codon.length() < 3) {
            codon += RNA[j];
            j++;
        }
        if (translate_table[codon] == "STOP") break;
        translated.push_back(translate_table[codon]);
    }
    return translated;
}

}  // namespace protein_translation
