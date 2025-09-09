
float ReadRadious()
{
	float R;

	cout << "Enter radious R: " << endl;
	cin >> R;

	return R;
}

float CircleArea(float R)
{
	const float PI = 3.1415926535897933238;

	float Area = PI * pow(R, 2);

	return Area;
}

void PrintResult(float Area)
{
	cout << "\nCircle Area " << Area << endl;
}


int main()
{
	PrintResult(CircleArea(ReadRadious()));



	return 0;
}