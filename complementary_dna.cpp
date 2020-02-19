// https://www.codewars.com/kata/554e4a2f232cdd87d9000038/cpp

#include <string>

std::string DNAStrand(const std::string& dna) {
  std::string new_dna { dna };
  for (auto& ch : new_dna) {
    if (ch == 'T') ch = 'A';
    else if (ch == 'A') ch = 'T';
    else if (ch == 'G') ch = 'C';
    else if (ch == 'C') ch = 'G';
  }
  return new_dna;
}
