#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv){
  long long low_range;
  long long high_range;
  int no_of_cases;
  cin >> no_of_cases;
  for(int i = 0;i < no_of_cases;i++){
    cin >> low_range;
    cin >> high_range;
    bool prime = true;
    int sql_range = ceil(sqrt(low_range));
    int sqh_range = floor(sqrt(high_range));
    //check for only odd numbers
    //change range to only odd values
    //if the division yields 1 then the number is prime 
    //use singly-linked list
    if(sql_range == 1 || sql_range == 2){
      cout << 2;
      sql_range = 3;
    }

  }
}
