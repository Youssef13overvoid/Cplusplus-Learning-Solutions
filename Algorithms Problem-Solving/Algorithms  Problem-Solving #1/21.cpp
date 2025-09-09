
float ReadCircumference()
{
	float L;

	cout << "Enter Circumference ? " << endl;
	cin >> L;

	return L;
}

float CircleAreaByCircumference(float L)
{
	const float PI = 3.1415926535897933238;

	float Area = pow(L, 2) / (4 * PI);

	return Area;

}

void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}


int main()
{

	PrintResult(CircleAreaByCircumference(ReadCircumference()));

	return 0;
} 
