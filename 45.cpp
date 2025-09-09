enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6,
	Jul = 7, Aug = 8, sep = 9, Oct = 10, Nov = 11, Dec = 12};


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
   
enMonthOfYear ReadMonthOfYear()
{
	return (enMonthOfYear)ReadNumberInRange("Enter Month of year [1 to 12]", 1, 30);
}

string GetMonthOfyear(enMonthOfYear Month)
{
		switch (Month)
		{
		case enMonthOfYear::Jan:
			return "January";
		case enMonthOfYear::Feb:
			return "February";
		case enMonthOfYear::Mar:
			return "March";
		case enMonthOfYear::Apr:
			return "April";
		case enMonthOfYear::May:
			return "May";
		case enMonthOfYear::Jun:
			return "June";
		case enMonthOfYear::Jul:
			return "July";
		case enMonthOfYear::Aug:
			return "August";
		case enMonthOfYear::sep:
			return "september";
		case enMonthOfYear::Oct:
			return "October";
		case enMonthOfYear::Nov:
			return "November";
		case enMonthOfYear::Dec:
			return "December";
		default:
			return "Wrong Month";
		}
}

int main()
{
	cout << GetMonthOfyear(ReadMonthOfYear()) << endl;
}