#include <iostream>
#include <cmath>

using namespace std;

int main() {

bool p, q;

p = true;
q = true;

cout << p << " XOR " << q << " is " << (  (p || q) && !(p && q)  ) << "  ";

p = false;
q = true;

cout << p << " XOR " << q << " is " << (  (p || q) && !(p && q)  ) << "  ";

p = true;
q = false;

cout << p << " XOR " << q << " is " << (  (p || q) && !(p && q)  ) << "  ";

p = false;
q = false;

cout << p << " XOR " << q << " is " << (  (p || q) && !(p && q)  ) << "  ";

return 0;

}