#include <iostream>
#include <fstream>

using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("file.txt");
  myfile << "Write 2 file.\n";
  myfile.close();
  return 0;
}
