#include <iostream>
#include <windows.h>
#include <Lmcons.h>

using namespace std;

int main()
{
	TCHAR name[UNLEN + 1];
	DWORD size = UNLEN + 1;

	cout << "===========================\n";
	if (GetUserName((TCHAR*)name, &size))
		wcout << L"Hello, " << name << L"!\n";
	else
		cout << "Hello, Ubbekanter Person!\n";
	cout << "===========================\n";
	cout << "\n";

	double var;
	char re;

	cout << "input your grade\n";
	cout << "between 1 to 6\n";
	cin >> var;

	while (var > 6 || cin.fail())
	{
		cout << "bitch i said between  1 and 6 god damn u stupid?\n";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> var;
	}

	if (var >= 1 && var <= 1.4)
	{
		cout << "your grade is Sehr Gut\n";
	}

	else if (var >= 1.5 && var <= 2.4)
	{
		cout << "your grade is Gut\n";
	}

	else if (var >= 2.5 && var <= 3.4)
	{
		cout << "your grade is Befridigend\n";
	}

	else if (var >= 3.5 && var <= 4.4)
	{
		cout << "your grade is Ausreichend\n";
	}

	else if (var >= 4.5 && var <= 5.4)
	{
		cout << "your grade is Mangelhaft\n";
	}

	else if (var >= 5.5 && var <= 6)
	{
		cout << "your grade is Ungenugend\n";
	}

	cout << "\n";
	cout << "do you want to calculate again?\n";
	cout << "y for Yes\n";
	cout << "n for No\n";

	cin >> re;

	if (re == 'y')
	{
		system("CLS");
		return main();

	}
	else if (re == 'n')
	{
		cout << "ok then have a nice day\n";
	}
	system("Pause");
	return 0;
}