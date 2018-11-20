#include <iostream>
#include <vector>

int main()
{
  unsigned int i, result;
  std::vector<int> fib_nums;
  result = 0;
  i=1;
  fib_nums.push_back(1);
  fib_nums.push_back(2);
  while ((fib_nums[i] + fib_nums[i-1]) < 4000000)
  {
    fib_nums.push_back(fib_nums[i] + fib_nums[i-1]);
    i++;
  }
  for(i=0; i < fib_nums.size(); i++)
  {
    if ((fib_nums[i] % 2) == 0)
    {
      result += fib_nums[i];
    }
  }
  std::cout<<result<<std::endl;
  return 0;
}
