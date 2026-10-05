//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	if (s.size() < 4 || s.size() > 10) { return 0; }
//	for (int i = 0; i < s.size(); i++)
//	{
//		if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122){}
//		else { return 0; }
//	}
//	int judge = 0;
//	if (s[0] == 'A') { judge++; }
//	string s1 = s;
//	int s1_size = s1.size();
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] == 'A' || s1[i] == 'C') { s1.erase(i, 1); }
//	}
//	int count_num = 0;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1.size() == s1_size - 2 && s1[i] >= 97 && s1[i] <= 122)
//		{
//			count_num++;
//		}
//	}
//	if (count_num == s1_size - 2) { judge++; }
//	int num = count(s.begin(), s.end(), 'C');
//	int pos = s.find('C');
//	if (num == 1 && pos >= 2 && pos <= s.size() - 2) { judge++; }
//	if (judge == 3) { cout << "AC" << endl; }
//	else { cout << "WA" << endl; }
//}