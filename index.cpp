#include <iostream>
#include <fstream>

namespace flohrere {

const char* title = "culture and cuisine | flohrere blog - berlin foodie";
  
void generate (const char* title) {
  std::ofstream indexfile;
  indexfile.open("index.html");
  indexfile << "<!DOCTYPE html>\n";
  indexfile << "<html>\n";
  indexfile << "\t<head>\n";
  indexfile << "\t\t<title> " << title << " </title>\n";
  indexfile << "\t</head>\n";
  indexfile << "\t<body>\n";
  indexfile << "\t\t<h1>flohrere</h1>\n";
  indexfile << "\t</body>\n";
  indexfile << "</html>\n";
  indexfile.close();
}

} // namespace flohrere
  
int main () {
  flohrere::generate(flohrere::title);
}
