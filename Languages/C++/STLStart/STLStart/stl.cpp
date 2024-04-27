//Containers: DataStructute
//Algorithms: Operating
//Iterators:  

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <string>

using namespace std;

void test_stack()
{
	stack <int> st;
	st.push(1);
	st.push(1);
	st.push(4);
	st.push(5);
	st.push(1);
	st.push(4);

	while (! st.empty())
	{
		cout << st.top() << ' ';
		st.pop();
	}
}

//stack, queue is not allowed iteroate.
void test_queue()
{
	queue <int> q;
	q.push(1);
	q.push(1);
	q.push(4);
	q.push(5);
	q.push(1);
	q.push(4);

	while (! q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}
}

void test_list()
{
	list<int> ls;
	
	ls.push_back(1);
	ls.push_back(1);
	ls.push_back(4);
	ls.push_back(5);
	ls.push_back(1);
	ls.push_back(4);

	list<int>::iterator itls;
	for (itls = ls.begin(); itls != ls.end(); itls++)
		cout << *itls << ' ';
}

void test_vector()
{
	vector<int> vec1;
	vec1.push_back(1);
	vec1.push_back(1);
	vec1.push_back(4);
	vec1.push_back(5);
	vec1.push_back(1);
	vec1.push_back(4);

	vector<int> ::iterator itvec1;

	for (itvec1 = vec1.begin(); itvec1 != vec1.end(); itvec1++)
		cout << *itvec1 << ' ';
}

int main(void)
{
	//test_vector();
	//test_list();
	//test_queue();
	test_stack();

	return 0;
}