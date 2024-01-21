#include <iostream>
#include <unordered_map>

using namespace std;

/**
The math behind:
 i = begin
 sum =  function
 n = end

 Therefore: start from i, sum all values up to and including n
 Base case: n = 1: return 1
 Recursive case: n > 1
*/

long long int summation(int n)
{
    if (n < 1)
        {
            return 0;
        }
    if (n == 1)
        {
            return 1;
        }
    return n + summation(n-1);
}

long long int summationMemo(int n, unordered_map<int,long long int>& memo)
{
    if (n < 1)
        {
            return 0;
        }
    if (memo.find(n) != memo.end())
        {
            return memo[n];
        }
    if (n == 1)
        {
            return 1;
        }
    memo[n] = n + summationMemo(n-1,memo);
    return memo[n];
}

int main()
{
    cout << "Summation function solution using recursion!" << endl;

   /* cout << summation(1) << endl;
    cout << summation(2) << endl;
    cout << summation(3) << endl;
    cout << summation(5) << endl;
    cout << summation(10) << endl;
    cout << summation(30) << endl;
    cout << summation(10000) << endl;*/
    cout << summation(28000) << endl; //too large for summation

    cout << "Summation function solution using recursion and memoisation!" << endl;
    unordered_map<int,long long int> memo;
    cout << summationMemo(1,memo) << endl;
    cout << summationMemo(2,memo) << endl;
    cout << summationMemo(3,memo) << endl;
    cout << summationMemo(5,memo) << endl;
    cout << summationMemo(10,memo) << endl;
    cout << summationMemo(30,memo) << endl;
    cout << summationMemo(100,memo) << endl;

    return 0;
}
