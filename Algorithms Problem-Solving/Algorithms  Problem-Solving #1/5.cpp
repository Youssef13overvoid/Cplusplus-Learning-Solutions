struct stInfo
{
	int Age;
	bool HaveAdriveLS;
	bool HasRecommendation;
};

stInfo ReadInfo()
{

	stInfo Info;

	cout << "Please Enter Your Age? " << endl;
	cin >> Info.Age;

	cout << "Do you have Drive License?" << endl;
	cin >> Info.HaveAdriveLS;

	cout << "Do you have reconnendation?" << endl;
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
		return (Info.Age >= 22 && Info.HaveAdriveLS);
	}

	
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Hired :)" << endl;
	else
		cout << "\n Rejected :(" << endl;
}


int main()
{
	PrintResult(ReadInfo());

	return 0;

}