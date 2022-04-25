#include <iostream>
#include <fstream>

int main() {
  std::ostream indexfile;
  indexfile.open("index.html");
  indexfile << "<!DOCTYPE html>\n";
  indexfile << "<html>\n";
  indexfile << "\t<head>\n";
  indexfile << "\t\t<title>flohrere</title>\n";
  indexfile << "\t</head>\n";
  indexfile << "\t<body>\n";
  indexfile << "\t\t<h1>flohrere</h1>\n";
  indexfile << "\t</body>\n";
  indexfile << "</html>\n";
  indexfile.close();
  return 0;
}
