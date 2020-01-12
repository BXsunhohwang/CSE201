#include <iostream>
#include <string>


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
 * \brief Find the second word in str
 *
 * The function changes the value of the string second.
 *
 * \return True iff str has a second word, false otherwise
 */
bool findSecond(std::string str, std::string &second) {
  bool is_previous_letter = false;
  unsigned int count_words = 0; // initially there are no words
  second = "";

  if (str.length() > 0) {
    is_previous_letter = ! isPunctuation(str[0]);
    count_words = 1; // Reading the first word
  }

  // Loop through the string characters to find the second word
  for (unsigned int i = 0; (i < str.length() && (count_words <= 2)); i++) {
    if (! isPunctuation(str[i])) {
      // We have a letter of a word
      if (count_words == 2) {
        // we saw 1 word until now --- so we start copying the second word
        second = second + str[i];
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

  // Return true if we saw two words
  return (count_words >= 2);
}

int main()
{
  std::string str;
  std::string second;

  // Read a new line terminated string from the user.
  std::getline(std::cin, str);

  // Find the second word in str
  bool found = findSecond(str, second);

  if (found) {
    // found the second word
    std::cout << str << std::endl;
    std::cout << second << "(" << second.length() << ")" << std::endl;
  } else {
    // str did not have enough words
    std::cout << "No second word!" << std::endl;
  }


  return 0;
}
