#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);
bool checkAnswer(const string &nameOfTest, int received, int expected);

// Implement printString here
void printString(string &s)
{
  for (int i = 0; i < s.size(); i++)
  {
    std::cout << s[i] << " ";
  }
}

// Implement testString here
bool testString(string &s)
{
  //c++.com use npos used as a value for length in string
  if (s.find('c') != std::string::npos && s.find('s') != std::string::npos && s.find('u') != std::string::npos && s.find('f') != std::string::npos)
  {
    return 1;
  }
  else
    return 0;

  cout << "\n";
}

// EDIT CODE BELOW *ONLY* FOR TESTING (ANY CODE BELOW WILL BE OVER-WRITTEN DURING GRADING WITH DIFFERENT TESTS)

int main() {
  cout << "string contains all of the characters: c, s, u, and f, in any order\n";
  {
    string s = "calif";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "califsu";
    printString(s);
    checkAnswer(s, testString(s), true);
  }
  {
    string s = "a";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "califstate";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "university calif";
    printString(s);
    checkAnswer(s, testString(s), true);
  }

  return 0;
}


bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
    return false;
}


bool checkAnswer(const string &nameOfTest, int received, int expected) {
    if (received == expected) {
        cout << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
    return false;
}
