#include <iostream>

using namespace std;

int main(void) {
  int s1, e1, s2, e2;
  cin >> s1 >> e1 >> s2 >> e2;

  int resInterval1 = ((s2 > s1 && s2 < e1)) ? s2 : -1;
  int resInterval2 = ((e1 > s2 && e1 < e2)) ? e1 : -1;

  cout<< resInterval1<<" "<<resInterval2<<endl;


  return 0;
}