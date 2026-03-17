#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Create and open a text file
  ofstream MyFile("684244127.txt");

  // Write to the file
  MyFile << "684244127 (Punnavich Jitsai), ปัณณวิชญ์ จิตใส";

  // Close the file
  MyFile.close();
}