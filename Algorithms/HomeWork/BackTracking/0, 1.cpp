#include <iostream>
#include <vector>

using namespace std;

//问题描述
int a[] = { 1, 2, 3, 4, 5 };
int n = 5, k = 9;
vector<int> minpath;	//存放最优解

//表示有几个解
int minn = n;

//打印解
void dispath()
{
	cout << "选择的元素: " << endl;
	for (int i = 0; i < minpath.size(); i++)
	{
		cout << minpath[i] << " ";
	}
	cout << "元素个数: " << minn;
}

//求解
void dfs(vector<int> path, int sum, int start)
{
	//开始位置>=n，返回
	if (start >= n)
	{
		return;
	}

	//剪枝
	if (path.size() >= minn || sum > k)
	{
		return;
	}


	//如果更优解，用该解替换当前保存的最优解的路径和选取的个数。
	if (sum == k)
	{
		if (path.size() < minn)
		{
			minn = path.size();
			minpath = path;
		}
	}
	//不选当前数
	dfs(path, sum, start + 1);
	path.push_back(a[start]);
	//选当前数
	dfs(path, sum + a[start], start + 1);
}


int main(void)
{
	vector<int> path;
	dfs(path, 0, 0);
	cout << "最优解: " << endl;
	
	dispath();

	return 0;
}