string ReadPassowrd()
{
	string Password;

	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> Password;

	return Password;
}


bool GuessPassword(string OriginalPassword)
{
	string word = "";
	int Counter = 0;

	cout << "\n";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Counter++;

				word += char(i);
				word += char(j);
				word += char(k);

				cout << "Trial [" << Counter << "] : " << word << endl;

				if ( word == OriginalPassword)
				{
					cout << "\n Password is " << word << "\n";
					cout << "Found after " << Counter << " Trail(s)\n";
					return true;
				}
				word = "";
			}
		}

	}

	return false;

}



int main()
{
	GuessPassword(ReadPassowrd());

	return 0;
}