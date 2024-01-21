#include <iostream>
#include <vector>

using namespace std;

int gridTraveler(int n,int m)
{
    vector<vector<int>> table(n+1);
    fill(table.begin(),table.end(),0);
    return 1;
}

int main()
{
    cout << "Grid Traveler Solution using Iteration + Tabulation!" << endl;
    gridTraveler(3,3);
    return 0;
}
