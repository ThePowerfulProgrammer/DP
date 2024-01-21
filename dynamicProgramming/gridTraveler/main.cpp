#include <iostream>
#include <unordered_map>
#include <string>
/**

How many different ways to travl a matrix, if we can only move right or down?

*/

using namespace std;


long long int gridTraveler(int m,int n, unordered_map<string,long long int> &memo)
{
    string key = std::to_string(m) + ',' + std::to_string(n);
    if (memo.find(key) != memo.end())
        {
            return memo[key];
        }

    if (m == 1 && n == 1)
        {
            return 1;
        }
    if (m == 0 || n == 0)
        {
            return 0;
        }

    memo[key] = gridTraveler(m-1,n,memo) + gridTraveler(m,n-1,memo);
    return memo[key];
}

int main()
{
    cout << "Grid Traveler + memoisation!" << endl;
    unordered_map<string,long long int> memo;
    cout << gridTraveler(1,1,memo) << endl;
    cout << gridTraveler(2,3,memo) << endl;
    cout << gridTraveler(3,3,memo) << endl;
    cout << gridTraveler(18,18,memo) << endl;

    return 0;
}
