#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortByAttack(vector<int> a, vector<int> b)
{
	return a[1] > b[1];
}

int main()
{
	int n, war, points = 0;
	cin >> n >> war;
	vector<vector<int>> wall;
	for (int i = 0; i < n; i++)
	{
		int height, attack;
		cin >> height >> attack;
		wall.push_back({ height, attack });
	}
	sort(wall.begin(), wall.end(), sortByAttack);
	while (war != 0)
	{
		vector<int> current = wall[0];
		int loss = min(current[0] / current[1], war);
		points += loss * current[1];
		war -= loss;
		wall[0][0] -= loss * current[1];
		wall[0][1] = current[0];
		sort(wall.begin(), wall.end(), sortByAttack);
	}
	cout << points;
}