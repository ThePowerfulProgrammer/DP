#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long int fib(int n,unordered_map<int,long long int> &memo)
{
    if (memo.find(n) != memo.end())
        {
            return memo[n];
        }
    if (n <= 2) {return 1;} //base case

    memo[n] = fib(n-1,memo) + fib(n-2,memo);
    return memo[n];
}

int main()
{
    cout << "Fib via recursion + memoization!" << endl;
    std::unordered_map<int, long long int> memo;
    cout << fib(1, memo) << endl;
    cout << fib(2, memo) << endl;
    cout << fib(6, memo) << endl;
    cout << fib(20, memo) << endl;
    cout << fib(50, memo) << endl;
    cout << fib(60, memo) << endl;
    return 0;
}
