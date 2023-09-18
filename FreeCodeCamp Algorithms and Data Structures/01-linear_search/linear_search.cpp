#include <iostream>

int linear_search(int range[], int size, int target){
  for(int i = 0; i < size; i++){
    if(range[i] == target){
      return i;
    }
  }
  return -1;
} 

int main (int argc, char *argv[]) {
  int range[] = {1,2,3,4,5};
  int size = 5;
  int target = 4;

  std::cout << linear_search(range, size, target);

  return 0;
}
