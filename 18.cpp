//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<set>
//#include<functional>
//using namespace std;
//
//int main()
//{
//	int N;
//	string s;
//	cin >> N >> s;
//	if (s.size() != N) { return 0; }
//	if (N < 2 || N>100) { return 0; }
//	//将s中所有字母都一一存进set中，运用set的唯一性来筛选字母
//	set<char>st;
//	set<int>st_count;
//	for (int i = 0; i < s.size(); i++)
//	{
//		st.insert(s[i]);
//	}
//	//通过循环随机分出多个两两一组的子串
//	for (int i = 0; i < s.size()-1; i++)
//	{
//		//count表示每个分割的情况下，统计不同字母个数
//		int count = 0;
//		//substr代表子串
//		string substr1 = s.substr(0, i + 1);
//		string substr2 = s.substr(i + 1, N - (i + 1));
//		if (substr2.size() == 0) { continue; }
//		//打印测试
//		/*cout << substr1 << ' ' << substr2 << endl;*/
//		for (set<char>::iterator it = st.begin();it!=st.end();it++)
//		{
//			int pos1 = substr1.find(*it);
//			int pos2 = substr2.find(*it);
//			if (pos1 != -1 && pos2 != -1)
//			{
//				count++;
//			}
//		}
//		//再创一个set用来存放不同情况下的count数目，运用set特性，找出最大的那个
//		st_count.insert(count);
//	}
//	//auto ==set<int>::reverse_iterator 用auto可以缩减代码长度，让编译器自行判断用什么迭代器
//	auto it = st_count.rbegin();
//	cout << *it << endl;
//}