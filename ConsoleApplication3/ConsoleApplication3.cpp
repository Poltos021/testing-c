# include <iostream>
# include <math.h>

using namespace std;
class calc
{
public:
	int* mult(int vec1[5], int vec2[5])
	{

		int res[5];

		for (int i = 0; i < 5; i++)
		{
			//res[i] = vec1[i] * vec2[i];
			vec1[i] = vec1[i] / 2;
			vec2[i] = vec2[i] / 2;
		}

		for (int i = 0; i < 5; i++)
		{
			cout << "Vec1 from Calc value is " << vec1[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "Vec2 from Calc value is " << vec2[i] << endl;
		}
		cout << endl;

		return res;
	}

};


class tests
{
public:
	void calcTest(int vec1[], int vec2[], int* res)
	{
		for (int i = 0; i < 5; i++)
		{
			if ((res[i] / vec1[i]) == vec2[i])
			{
				cout << "Value " << i << " is valid" << endl;
			}
			cout << i << " Calc is not valid " << endl;
		}
	}
};

class tests2
{
public:
	void checkTest(int vec1[], int vec2[])
	{
		int checkVec1 = 0;
		int checkVec2 = 0;
		for (int i = 0; i < 5; i++)
		{
			checkVec1 = checkVec1 + vec1[i];
			checkVec2 += vec2[i];
			if (checkVec1 == 0 || checkVec2 == 0)
			{
				cout << "0 вектор " << endl;
			}

		}
	}

};

int main()
{
	int vec1[5];
	int vec2[5];
	int* res;

	calc calc1;
	tests calc2;
	char Input;
	tests2 t;

	while (Input != 'q') {

		cout << "Enter vec1 " << endl;
		for (int i = 0; i < 5; i++)
		{
			cin >> vec1[i];
		}

		cout << "Enter vec2 " << endl;
		for (int i = 0; i < 5; i++)
		{
			cin >> vec2[i];
		}

		t.checkTest(vec1, vec2);

	}


	res = calc1.mult(vec1, vec2);
	calc2.calcTest(vec1, vec2, res);


	for (int i = 0; i < 5; i++)
	{
		cout << "Vec1 from main value is " << vec1[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Vec2 from main value is " << vec2[i] << endl;
	}

	return 0;
}