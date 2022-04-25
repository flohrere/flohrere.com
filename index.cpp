#include <iostream>
#include <fstream>

void generate () {
  std::ofstream indexfile;
  indexfile.open("index.html");
  indexfile << "<!DOCTYPE html>\n";
  indexfile << "<html>\n";
  indexfile << "\t<head>\n";
  indexfile << "\t\t<title> culture and cuisine | flohrere - berlin blogger </title>\n";
  indexfile << "\t</head>\n";
  indexfile << "\t<body>\n";
  indexfile << "\t\t<h1>flohrere</h1>\n";
  indexfile << "\t</body>\n";
  indexfile << "</html>\n";
  indexfile.close();
}

int main () {
  generate();
  return 0;
}
