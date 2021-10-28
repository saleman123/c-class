#include <iostream>
using std::cout;
using std::endl;

int main () {
  int i = 0, my_num = 0;
  srand(0);

  while (my_num != 42) {

    my_num = rand()%100;
    cout << "the index is " << i  << endl; 
    i++;

}


    cout << "How many numbers it took to hit 42: "  << i << endl;

return 0;
}


