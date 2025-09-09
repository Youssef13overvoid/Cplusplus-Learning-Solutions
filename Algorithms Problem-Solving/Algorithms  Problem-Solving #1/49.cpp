string ReadPinCode()
{
	string PIN;
	cout << "enter PIN:\n";
	cin >> PIN;

	return PIN;
}

bool Login()
{
	string Pincode;
	do
	{   
		counter--;
		Pincode = ReadPinCode();

		if (Pincode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\n\nWrong PIN, you have " << counter << " more tries\n";
			system("color 4F");
		}

	} while (Pincode != "1234");

		return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour account balance is " << 7500 << '\n';
	}

	return 0; 
}