#include <iostream>
using namespace std;
int stringLength(const char c[])
{
	int i=0;
	while (c[i]!='\0')
		i++;
	return i;
}

int main()
{
	char S1[] = "BLABLABLABLA";
	int len = stringLength(S1);
	cout << "The C-string S1 is " << S1 << endl;
	cout << "The length of S1 is " << len << endl << endl;
	cout << "TEST 1. Copy S1 to S2 such that length of S2 is smaller than length of S1" << endl << endl;

	//Create a C-String S2 which is shorter than S1.
	//Initialize S2 with any characters
	//Put a null character at the end of S2

	char *S2 = new char[3];
	for (int i = 0; i < 2; i++)
	S2[i] = 'A';
	S2[2] = '\0';
	cout << "Originally, S2 is " << S2 << " and its length is " << stringLength(S2) << endl;
	//Copy S1 to S2

	stringCopy(S1, S2); //This function call will not copy anything from S1 to S2

	cout << "After stringCopy, the C-string S2 is " << S2 << endl;
	cout << "The length of S2 is " << stringLength(S2) << endl << endl;
	//Delete S2
	delete[] S2;

	cout << "TEST 2. Copy S1 to S2 such that length of S2 is exactly equal to length of S1" << endl << endl;

	//Create a C-String S2 which is same length as S1.
	//Initialize S2 with any characters
	//Put a null character at the end of S2
	S2 = new char[len+1]; //You need one more space for the \0

	for (int i = 0; i < len; i++)
	S2[i] = 'A';
	S2[len] = '\0';
	cout << "Originally, S2 is " << S2 << " and its length is " << stringLength(S2) << endl;

	//Copy S1 to S2

	stringCopy(S1, S2); //This function call will copy S1 to S2
	cout << "After stringCopy, the C-string S2 is " << S2 << endl;
	cout << "The length of S2 is " << stringLength(S2) << endl << endl;
	//Delete S2
	delete[] S2;
	cout << "TEST 3. Copy S1 to S2 such that length of S2 is bigger than length of S1" << endl << endl;
	//Create a C-String S2 which is much longer than S1.
	//Initialize S2 with any characters
	//Put a null character at the end of S2
	int s2Length = len+10;
	S2 = new char[s2Length+1]; //You need one more space for the \0
	for (int i = 0; i < s2Length; i++)
	S2[i] = 'A';
	S2[s2Length] = '\0';
	cout << "Originally, S2 is " << S2 << " and its length is " << stringLength(S2) << endl;
	//Copy S1 to S2

	stringCopy(S1, S2); //This function call will copy S1 to S2 and put \0 after the last character copied

	cout << "After stringCopy, the C-string S2 is " << S2 << endl;
	cout << "The length of S2 is " << stringLength(S2) << endl;
	//Delete S2
	delete[] S2;
	system("Pause");
	return 0;
}