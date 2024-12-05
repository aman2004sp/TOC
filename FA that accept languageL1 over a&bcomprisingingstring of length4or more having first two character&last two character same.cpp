#include <iostream>
#include <string>
using namespace std;
void q1(string w, int i);
void q2(string w, int i);
void q3(string w, int i);
void q4(string w, int i);
void q5(string w, int i);
void q6(string w, int i);
void q7(string w, int i);
void q8(string w, int i);
void q9(string w, int i);
void q10(string w, int i);
void q11(string w, int i);
void q12(string w, int i);
void q1(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q2(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q3(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q2(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q5(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q4(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q3(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q7(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q6(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q4(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q8(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q4(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q5(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q9(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q5(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q6(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q6(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q10(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q7(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q7(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q11(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q8(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q8(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q12(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q9(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q12(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q5(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q10(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q6(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q1(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q11(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected" << endl;
		return;
	}
	if (w[i] == '1')
	{
		q2(w, i + 1);
	}
	else if (w[i] == '0')
	{
		q12(w, i + 1);
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
void q12(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Accepted" << endl;
	}
	else
	{
		cout << "String Rejected" << endl;
	}
}
int main()
{
	string w;
	cout << "Enter the string (1,0): ";
	cin >> w;
	q1(w, 0);
	return 0;
}