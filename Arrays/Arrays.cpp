#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> array;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		cin >> a;
		array.push_back(a);
	}
	map<int, int> occures;
	for (int i = 0; i < array.size(); i++)
	{
		occures[array[i]]++;
	}
	vector<int> maxKeys;
	int maxVal = 0;
	for (const auto& kv : occures)
	{
		if (kv.second>maxVal)
		{
			maxKeys.clear();
			maxKeys.push_back(kv.first);
			maxVal = kv.second;
		}
		else if (kv.second == maxVal) {
			maxKeys.push_back(kv.first);
		}
	}
	if (maxKeys.size() == 1)
	{
		cout << maxKeys[0];
		return 0;
	}
	sort(maxKeys.begin(), maxKeys.end());
	for (int i = 0; i < maxKeys.size(); i++)
		cout << maxKeys[i] << " ";
}