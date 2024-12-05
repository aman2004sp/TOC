#include<iostream>
#include<string.h>
using namespace std;
void q0(string w , int i);
void q1(string w , int i);
void q2(string w , int i);
void q3(string w , int i);
int main()
{
	string w;
	cout << "Enter the string(a,b) : ";
	cin >> w;
	q0(w, 0);
	return 0;
}
void q0(string w , int i)
{
	cout<<"\n"<<w[i]<<" : State 1";
	if (i == w.length())
		cout << "\nString Accepted";
	if (w[i] == 'a')
		q2(w, i + 1);
	else if (w[i] == 'b')
		q1(w, i + 1);
}
void q1(string w , int i)
{
	cout<<"\n"<<w[i]<<" : State 2";
	if (i == w.length())
		cout << "\nString Rejected";
	if (w[i] == 'a')
		q3(w, i + 1);
	else if (w[i] == 'b')
		q0(w, i + 1);
}
void q2(string w , int i)
{
	cout<<"\n"<<w[i]<<" : State 3";
	if (i == w.length())
		cout << "\nString Rejected";
	if (w[i] == 'a')
		q0(w, i + 1);
	else if (w[i] == 'b')
		q3(w, i + 1);
}
void q3(string w , int i)
{
	cout<<"\n"<<w[i]<<" : State 4";
	if (i == w.length())
		cout << "\nString Rejected";
	if (w[i] == 'a')
		q1(w, i + 1);
	else if (w[i] == 'b')
		q2(w, i + 1);
}
