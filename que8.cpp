#include<iostream>
#include<string>
using namespace std;

int main()
{

	string s;
	int flag=0;
	cout << "Enter the log : ";
	cin >> s;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]=='A' || s[i]=='B')&&(s[i+1]=='A' || s[i+1]=='B'))
		{
		if(s[i]!=s[i+1])
		{
		i++;
		continue;
		}
		else
		{
		flag=1;
		break;
		}
		}
		else{
		cout<<"String Format Incorrect"<<endl;
		return 0;
		}
	}
	if(flag==0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
return 0;

}