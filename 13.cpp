//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int A, B;
//	vector<int>v,v1;
//	cin >> A >> B;
//	int temp=A;
//	int Count = 0;
//	for (; temp <= B; temp++)
//	{
//		int count = 0;
//		int i = temp;
//		int j = 0;
//		for (;i!=0;)
//		{
//			j = i % 10;
//			v.push_back(j);
//			i = (i - j) / 10;
//		}
//		v1 = v;
//		reverse(v1.begin(), v1.end());
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (v[i] == v1[i])
//			{
//				count++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (count == v.size())
//		{
//			Count++;
//		}
//		v.clear();
//		v1.clear();
//	}
//	cout << Count << endl;
//}