#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool canSum(int target,vector<int> numbers, unordered_map<int,bool> &memo)
{
    if (target == 0)
        {
            return true;
        }
    if (memo.find(target) != memo.end())
        {
            return memo[target];
        }
    if (target < 0)
        {
            return false;
        }
    for (int num:numbers)
        {
            const int remainder = target - num;
            if (canSum(remainder,numbers,memo) == true)
                {
                    memo[target] = true;
                    return true;
                }
        }

    memo[target] = false;
    return false;

}

int main()
{
    cout << "canSum using Recursion + memoisation!" << endl;

    unordered_map<int,bool> memo;
    vector<int> numbers = {7,14};
    cout << canSum(300, numbers,memo) << endl;
    return 0;
}
