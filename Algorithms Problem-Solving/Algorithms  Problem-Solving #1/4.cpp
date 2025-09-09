struct stInfo
{
	int Age;
	bool HaveAdriveLS;
};

stInfo ReadInfo()
{

	stInfo Info;

	cout << "Please Enter Your Age? " << endl;
	cin >> Info.Age;

	cout << "Do you have Drive License?" << endl;
	cin >> Info.HaveAdriveLS;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age >= 22 && Info.HaveAdriveLS);
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
