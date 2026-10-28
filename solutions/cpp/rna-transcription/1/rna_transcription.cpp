#include "rna_transcription.h"

namespace rna_transcription {
std::string to_rna(std::string DNA) {
  std::string rna = "";
  for (char c : DNA) {
    switch (c) {
    case 'G':
      rna += 'C';
      break;
    case 'C':
      rna += 'G';
      break;
    case 'A':
      rna += 'U';
      break;
    default:
      rna += 'A';
      break;
    }
  }
  return rna;
}
char to_rna(char DNA) {
  switch (DNA) {
  case 'G':
    return 'C';
  case 'C':
    return 'G';
  case 'A':
    return 'U';
  default:
    return 'A';
  }
}
} // namespace rna_transcription
