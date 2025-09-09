
enum enDayOfWeek { sat = 1, sun = 2, mon = 3, tue = 4, wed = 5, fri = 6, thu = 7 };


int ReadNumberInRange(string Massage, int From, int To)
{
	int Number = 0;

	do
	{
		cout << Massage << endl;
		cin >> Number;
	} while (Number < From || Number > To);
	
	return Number;
}
   
enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Enter Day Number sat = 1, sun = 2, mon = 3, tue = 4, wed = 5, fri = 6, thu = 7", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::sat:
		return "Saturday";
	case enDayOfWeek::sun:
		return "Sunday";
	case enDayOfWeek::mon:
		return "Monday";
	case enDayOfWeek::tue:
		return "Thesday";
	case enDayOfWeek::wed:
		return "Wednesday";
	case enDayOfWeek::fri:
		return "Friday";
	case enDayOfWeek::thu:
		return "Thursday";
	default:
		return "Not a valid day!!";
	}
}

int main()      
{
	cout << GetDayOfWeek(ReadDayOfWeek());


	return 0;
}