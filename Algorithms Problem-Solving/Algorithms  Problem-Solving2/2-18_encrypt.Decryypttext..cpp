string ReadText()
{
	string text;

	cout << "enter text?:" << endl;
	getline(cin, text);

	return text;
}

string encrypttext(string text, short encrypkey)
{
	for (int i = 0;  i <= text.length(); i++)
	{
		text[i] = char((int)text[i] + encrypkey);
	}

	return text;
}

string Decryypttext(string text, short encrypkey)
{
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i] - encrypkey);
	}

	return text;
}



int main()
{
	const short encrypkey = 2;

	string text = ReadText();
	string textAfterEncryption = encrypttext(text, encrypkey);
	string textAfterdecryption = Decryypttext(textAfterdecryption, encrypkey);


	

	cout << "text Before encrypttext : " << text << endl;
	cout << "text After encryotion : " << textAfterEncryption << endl;
	cout << "text After Decryption : " << textAfterdecryption << endl;


	return 0;
}