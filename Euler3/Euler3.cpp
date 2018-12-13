#include <iostream>
#include <vector>

void is_prime(std::vector<long int>& primes, long int value)
{
  for (int i = 0; i < primes.size(); i++)
  {
    if (!(value%primes[i]))
    { // Composite so it can be divided by a prime
      return;
    }
  }
  // If it is a prime, do this
  primes.push_back(value);
  return;
}

int main()
{
  // Find the largest prime factor of the value
  std::vector<long int> primes;
  long int value, curr, quart, half, seventh;
  // First 6 primes
  primes.push_back(2);
  primes.push_back(5);
  primes.push_back(7);
  primes.push_back(11);
  primes.push_back(13);
  primes.push_back(17);

  value = 600851475143;
  quart = value/4;
  half = value/2;
  seventh = 3*(value/4);
  curr = 2;
  while (curr < value)
  {
    is_prime(primes, curr);
    if (curr == quart)
    {
      std::cout<<curr<<std::endl;
    }
    else if (curr == half)
    {
      std::cout<<curr<<std::endl;
    }
    else if (curr == seventh)
    {
      std::cout<<curr<<std::endl;
    }
    curr++;
  }
  std::cout<<*(--(primes.end()))<<std::endl;

  return 0;
}
