//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool NumJudge(int p)
//{
//	if (p % 2 == 0) { return true; }
//	else { return false; }
//}
//
//int main()
//{
//	vector<int>v;
//	int N;
//	int count=0;
//	cin >> N;
//	if (N > 200 || N < 1) { return 0; }
//	for (int i=1; i <= N; i++)
//	{
//		int p;
//		cin >> p;
//		if (p > 1e9 || p < 1) { return 0; }
//		v.push_back(p);
//	}
//	while (1)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			if(v[j-1]<1){ cout << count << endl; return 0; }
//			bool m = NumJudge(v[j - 1]);
//			if (m == false) { cout << count << endl; return 0; }
//			else if (m == false && count == 0) { cout << '0' << endl; return 0; }
//			else { v[j - 1] /= 2; }
//		}
//		count++;
//	}
//}