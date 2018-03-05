#include <iostream>
#include "doctest.h"

#include "triangle.h"


using std::string;

string box(int width, int height){
  string s = "";
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; j++) {
      s=s+"*";
    }
    s=s+"\n";
  }
  return s;
}

TEST_CASE("Testing Triangle"){
  string s = box(4,3);
  CHECK(s=="****\n****\n****\n");
}
