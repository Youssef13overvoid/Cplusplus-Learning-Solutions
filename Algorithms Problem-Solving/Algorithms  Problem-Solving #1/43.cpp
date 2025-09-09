
struct strTaskDuration 
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeceonds;
};

int ReadPositiveNumber(string Massege)
{
	int num = 0;

	do
	{
		cout << Massege << endl;
		cin >> num;

	} while (num <= 0);


	return num;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuraion;
	const int secondsPerday = 24 * 60 * 60;
	const int secondsPerhour = 60 * 60;
	const int secondsPerMin = 60;

	int Remainder = 0;
	TaskDuraion.NumberOfDays = floor(TotalSeconds / secondsPerday);
	Remainder = TotalSeconds % secondsPerday;
	TaskDuraion.NumberOfHours = floor(Remainder / secondsPerhour);
	Remainder = Remainder % secondsPerhour;
	TaskDuraion.NumberOfMinutes = floor(Remainder / secondsPerMin);
	Remainder = Remainder % secondsPerMin;
	TaskDuraion.NumberOfSeceonds = Remainder;

	return TaskDuraion;
}

void PrintTaskDuration(strTaskDuration TaskDuartion)
{
	cout << "\n";
	cout << TaskDuartion.NumberOfDays << ":"
		<< TaskDuartion.NumberOfHours << ":"
		<< TaskDuartion.NumberOfMinutes << ":"
		<< TaskDuartion.NumberOfSeceonds << "\n";
}


int main()      
{
	int TotalSeconds = ReadPositiveNumber("Enter Total Seconds:");
	PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));


	return 0;
}
