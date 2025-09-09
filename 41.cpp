float ReadPositiveNumber(string Massege)
{
	int num = 0;

	do
	{
		cout << Massege << endl;
		cin >> num;

	} while (num <= 0);


	return num;
}

float HoursToDays(float NumberOfHours)
{
	return NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
	return NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
	return NumberOfDays / 7;
}

int main()      
{
	float NumberOfhours = ReadPositiveNumber("Enter Number of hours:");
	float NumberOfDays = HoursToDays(NumberOfhours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;
	cout << "Total Hours = " << NumberOfhours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << HoursToWeeks(NumberOfhours) << endl;


	return 0;
}
 