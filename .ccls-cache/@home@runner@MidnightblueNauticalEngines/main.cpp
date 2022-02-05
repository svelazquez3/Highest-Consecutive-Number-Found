// Program that outputs the total consecutive number of ones found in a vector
#include <iostream> 
#include <vector> 
#include <string> 

using namespace std; 

int findMaxConsecutiveNum(vector<int> nums); 

int main(){
  vector <int> numbers = {1,0,1,1,0,1,1,1,0,1,1,0,1}; 

  int consecutiveFound; 
  consecutiveFound = findMaxConsecutiveNum(numbers); 
  cout << "Total amount of consecutive ones found is: " << consecutiveFound; 

return 0; 
}

int findMaxConsecutiveNum(vector<int> nums){
  int consecutive = 0; int higherConsecutive = 0;

  for(int x = 0; x < nums.size(); x++)
  {
    if(nums[x] == 1)
    {
      consecutive++; 
      if(consecutive >= higherConsecutive) // higherConsecutive gets replaced by consecutive if consecutive it has a value that is either or greater
        higherConsecutive = consecutive; 
    }
    else
      consecutive = 0; // Consecutive is restarted back to 0 if any value other than one is found. This occurs while keeping the record high in variable higherConsecutive
  }
  return higherConsecutive;
}
