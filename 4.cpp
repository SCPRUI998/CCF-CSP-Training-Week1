//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s, t;
//	cin >> s >> t;
//	for (int i = 0; i < s.size(); i++)
//	{
//		for (int j = i+1; j < s.size(); j++)
//		{
//			if (s[i] > s[j])
//			{
//				char temp = s[i];
//				s[i] = s[j];
//				s[j]=temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < t.size(); i++)
//	{
//		for (int j = i + 1; j < t.size(); j++)
//		{
//			if (t[i] < t[j])
//			{
//				char temp = t[i];
//				t[i] = t[j];
//				t[j] = temp;
//			}
//		}
//	}
//	char a,b;
//	int count1=0 ,count2= 0;
//	for (int i = 0; i < s.size() ; i++)
//	{
//		a = s[0];
//		if (s[i] == s[i + 1]) { count1++; }
//
//	}
//	count1++;
//	for (int i = 0; i < t.size(); i++)
//	{
//		b = t[0];
//		if (t[i] == t[i + 1]) { count2++; }
//
//	}
//	count2++;
//	if (a==b&&count1 == s.size() && count2 == t.size() && count1 < count2)
//	{
//		cout << "Yes" << endl; return 0;
//	}
//	else if (a==b&&count1 == s.size() && count2 == t.size() && count1 == count2)
//	{
//		cout << "No" << endl; return 0;
//	}
//
//	for (int i = 0, j = 0; i < s.size()&&j < t.size(); i++, j++)
//	{
//		
//		if (s[i] < t[j])
//		{
//			cout << "Yes" << endl;
//			return 0;
//		}
//		else
//		{
//			cout << "No" << endl;
//			return 0;
//		}
//	}
//}