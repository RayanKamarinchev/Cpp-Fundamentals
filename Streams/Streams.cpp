#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tokenize(string s, string del = " ")
{
    vector<string> res;
    int start, end = -1 * del.size();
    do {
        start = end + del.size();
        end = s.find(del, start);
        res.push_back(s.substr(start, end - start));
    } while (end != -1);
    return res;
}

int main()
{
    char input[100];
    cin.getline(input, sizeof(input));
    string in = input;
	string result;
	for (int i = 0; i < in.length(); i++)
	{
		if (isdigit(input[i]) || input[i] == ' ')
		{
			result += input[i];
		}
	}
    vector<string> numStrings = tokenize(result, " ");
    vector<int> nums;
    for (int i = 0; i < numStrings.size(); i++)
    {
        nums.push_back(stoi(numStrings[i]));
    }
    int max = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    cout << max;
}