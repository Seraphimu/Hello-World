#include <iostream>
#include <cstdlib>

using namespace std;
#define MAXN 10
int q[MAXN];

//测试第i行的第q[i]列是否能摆放皇后
bool place(int i)
{
	int j = 1;
	if (i == 1)
	{
		return true;
	}

	//j = 1 到 i - 1是已经放置皇后的行
	while (j < i)
	{
		if ((q[j] == q[i]) || abs(q[j] - q[i]) == abs(j - i))
		{
			//判断该皇后是否与之前摆放的皇后同列，位置(j, q[j])与(i, q[i])是否在同一个对角线上
			return false;
		}
		j++;
	}
	return true;
}

//求解的个数
int Queens(int n)
{
	//初始化
	int count = 0;
	int i = 1;
	q[1] = 0;

	while (i > 0)
	{		
		//下一列
		q[i]++;
		
		while (q[i] <= n && !place(i))
		{
			q[i]++;
		}
		
		if (q[i] <= n)
		{
			//找到一个解count+1
			if (i == n)
			{
				count++;
			}
			else
			{
				i++;
				q[i] = 0;
			}
		}
		else
		{
			//回溯
			i--;
		}
	}

	return count;
}

int main(void)
{
	cout << "验证结果如下：" << endl;

	for (int n = 4; n <= 10; n += 2)
	{
		if (Queens(n) == 2 * Queens(n / 2))
		{
			cout << "n = " << n << "正确" << endl;
		}
		else
		{
			cout << "n = " << n << "错误" << endl;
		}
	}

	return 0;
}