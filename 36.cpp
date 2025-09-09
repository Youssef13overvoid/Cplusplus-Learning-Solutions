enum enOperationType{ Add = '+', Subtract = '-',
	                 Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
	int num = 0;
	cout << Message << endl;
	cin >> num;

	return num;
}

enOperationType ReadOpType()
{
	char OT = '+';

	cout << "enter Operation Type ( +, -, *, / )?" << endl;
	cin >> OT;

	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Number1 + Number2;

	case enOperationType::Subtract:
		return Number1 - Number2;

	case enOperationType::Multiply:
		return Number1 * Number2;

	case enOperationType::Divide:
		return Number1 / Number2;

	default:
		return Number1 + Number2;
	}
}

int main()
{
	float Number1 = ReadNumber("Enter First Number:");
	float Number2 = ReadNumber("Enter second Number:");

	enOperationType OperationType = ReadOpType();

	cout << "\nResult: " << Calculate(Number1, Number2, OperationType);


	return 0;
} 