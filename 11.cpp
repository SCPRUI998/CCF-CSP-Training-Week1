//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int>v;
//	for (int i = 0; i < N; i++)
//	{
//		int p;
//		cin >> p;
//		v.push_back(p);
//	}
//	sort(v.begin(), v.end(),greater<int>());
//	int temp=0;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); )
//	{
//		if (it + 1 == v.end()) { temp = temp + *it; break; }
//		temp = temp + (*it - *(it + 1));
//		it += 2;
//	}
//	cout << temp << endl;
//}