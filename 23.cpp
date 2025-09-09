
void ReadTriangleData(float &a, float &b, float &c)
{

	cout << "Enter Trinangle side a ? " << endl;	
	cin >> a;

	cout << "Enter Trinangle side b ? " << endl;
	cin >> b;

	cout << "Enter Trinangle side c ? " << endl;
	cin >> c;
}

float CircleAreaByATrinangle(float a, float b, float c)
{
	const float PI = 3.1415926535897933238;

	float p;
	
	p = (a + b + c) / 2;

	 float T;
	 
	 T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

	float Area = PI * pow(T, 2);

	return Area;
}

void PrintResult(float Area) 
{
	cout << "\nCircle Area = " << Area << endl;
}


int main()
{
	float a, b, c;

	ReadTriangleData(a, b, c);

	PrintResult(CircleAreaByATrinangle(a, b, c));


	return 0;
} 
