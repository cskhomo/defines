#include "console.h"
using namespace std;

int main(int argc, char** argv){
  string term = parse(argv);
  print(term);
}
