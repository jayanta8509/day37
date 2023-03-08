// Write a Program to calculate the Frequency of characters in a string
#include <iostream>
#include <unordered_map>
using namespace std;
void Frequency(string a) {
  unordered_map<char, int> ok;
  for (char k : a) {
    ok[k]++;
  }
  for (auto b : ok) {
    cout << "The frequency of"
         << "  " << b.first << " is " << b.second << endl;
  }
}

int main() {
  string a = "Program";
  Frequency(a);
}