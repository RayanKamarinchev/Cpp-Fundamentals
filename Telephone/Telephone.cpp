#include <iostream>
#include <vector>
using namespace std;

int max(vector<int>& array)
{
    int max, index;

    max = array[0];
    index = 0;
    for (int i = 0; i < array.size(); i++)
    {
        if (max < array[i]) {
            max = array[i];
            index = i;
        }
    }
    return index;
}

int calcPoints(vector<int> arr)
{
    if (arr.size() ==1 || arr.size() == 0)
    {
        return 0;
    }
    else if (arr.size() == 2)
    {
        return 1;
    }
    int points = arr.size() - 1;
    int index = max(arr);
    vector<int> first, second;
    for (int i = 0; i < index; i++)
    {
        first.push_back(arr[i]);
    }
    for (int i = index+1; i < arr.size(); i++)
    {
        second.push_back(arr[i]);
    }
    points += calcPoints(first);
    points += calcPoints(second);
    return points;
}

int main()
{
    int n;
    cin >> n;
    vector<int> town;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        town.push_back(num);
    }
    cout << calcPoints(town);
}