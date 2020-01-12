#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

/**
 * \brief get a random letter (a character in the range 'a', ...,'z' or 'A', ..., 'Z').
 *
 * \return a random letter.
 */
char getRandomLetter() {
  // There are 25 letters. 65 is the value of the first letter.
  int intval = ((rand() % 25) +  65);
  std::cout << intval << std::endl;
  std::cout << (char) intval << std::endl;

  // Randomly pick an upper or a lowercase letter
  if (rand() % 2) {
    return (char) intval;
  } else {
    // lowercase 'a' is 97 (65 + 32)
    return (char) intval + 32;
  }
}

/**
 * \brief check if character is a punctation character or a space.
 *
 * \return true iff character is a punctation character or a space.
 */
bool isPunctuation(char character) {
  bool is_punctuation = false;

  // number of the the punctuation characters
  const unsigned int tot_symbols = 6;
  char punctuation[] = {' ', ',', ';', '.', '!', '?'};

  // Check if character belongs to the array of punctation characters
  for (unsigned int i = 0; (i < tot_symbols) && (! is_punctuation); i++) {
    if (character == punctuation[i]) {
      is_punctuation = true;
    }
  }

  return is_punctuation;
}

/**
 * \brief Obfuscate all the words in str except the second one.
 *
 * \return The hamming distance between str and its obfuscated version
 */
int obfuscateSecond(std::string& str) {
  int hamming = 0;
  bool is_previous_letter = false;
  unsigned int count_words = 0; // initially there are no words

  if (str.length() > 0) {
    is_previous_letter = ! isPunctuation(str[0]);
    count_words = 1; // Reading the first word
  }

  // Loop through the string characters to obfuscate the string
  for (unsigned int i = 0; i < str.length(); i++) {
    if (! isPunctuation(str[i])) {
      // obfuscate the all the words but the second
      if (count_words != 2) {
        // get a random character
        char new_char = getRandomLetter();

        // compute the hamming distance
        if (str[i] != new_char) {
          hamming += 1;
        }

        str[i] = new_char;
      }

      is_previous_letter = true;
    } else {
      // We have a punctuation mark --- it separates words
      if (is_previous_letter) {
        count_words = count_words + 1;
      }
      is_previous_letter = false;
    }
  }

  return hamming;
}

int main()
{
  std::string str;

  srand(time(NULL));

  std::getline(std::cin, str);
  int hamming = obfuscateSecond(str);
  std::cout << str << " " << "(" << hamming << ")" << std::endl;

  return 0;
}
