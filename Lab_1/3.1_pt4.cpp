#include <iostream>

using namespace std;

// 4. Below is a sample program. Use it to answer the following question: Suppose an
// identifier has two different declarations, one in an outer block and one in a nested
// inner block. If the name is accessed within the outer block, but after the inner block,
// which declaration is used?
int main()
{
  int arg1;
  arg1 = -1;
  {
    char arg1 = 'A';
  }
  cout << arg1 << "\n";
  return 0;
}
// The declaration before the inner block is used.