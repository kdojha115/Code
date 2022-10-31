// Leetcode
// Algorithm 1
// Day 11
// 77. Combinations

// Approach 1:

// Simple and fast

class Solution
{
public:
	vector<vector<int>> combine(int n, int k)
	{
		vector<vector<int>> result;
		int i = 0;
		vector<int> p(k, 0);
		while (i >= 0)
		{
			p[i]++;
			if (p[i] > n)
				--i;
			else if (i == k - 1)
				result.push_back(p);
			else
			{
				++i;
				p[i] = p[i - 1];
			}
		}
		return result;
	}
};

// Approach 2:

//using Recursion

class Solution
{
public:
	vector<vector<int>> ans;

	void helper(int idx, int k, vector<int> &current, int n)
	{
		if (current.size() == k)
		{
			ans.push_back(current);
			return;
		}

		for (int i = idx; i < n + 1; i++)
		{
			current.push_back(i);
			helper(i + 1, k, current, n);
			current.pop_back();
		}
	}

	vector<vector<int>> combine(int n, int k)
	{
		vector<int> current;
		helper(1, k, current, n);
		return ans;
	}
};