

{
	int NumberOfDays, NumberOfHours, NumberOfMin, NumberOfSeceonds;
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

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Enter Number Of Days:");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Enter Number Of Hours:");
	TaskDuration.NumberOfMin = ReadPositiveNumber("Enter Number Of Muniuts:");
	TaskDuration.NumberOfSeceonds = ReadPositiveNumber("Enter Number Of Secends:");

	return TaskDuration;
}

int TaskDurationInSeceonds( strTaskDuration TaskDuration)
{
	int DurationInSeceonds = 0;

	DurationInSeceonds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeceonds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeceonds += TaskDuration.NumberOfMin * 60;
	DurationInSeceonds += TaskDuration.NumberOfSeceonds;

	return DurationInSeceonds;
}

int main()      
{
	cout << "\nTask Duration In Seconds: " << TaskDurationInSeceonds(ReadTaskDuration());
	cout << endl;

	return 0;
}
 