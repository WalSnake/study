#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;
// Task 1
class Power {
public:
	float a = 2.0;
	float b = 6.0;

	Power() {}

	void set() {
		cout << "Give me two float numbers" << endl;
		cin >> a >> b;
	}

	float calculate() {
		float c = pow(a, b);
		return c;
	}

	~Power() {}
};

// Task 2
class RGBA {
private:
	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;

public:
	RGBA() {}
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
		:m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{
	}

	void print() {
		cout << "red =   " << static_cast <int>(m_red) << endl;
		cout << "green = " << static_cast <int>(m_green) << endl;
		cout << "blue =  " << static_cast <int>(m_blue) << endl;
		cout << "alpha = " << static_cast <int>(m_alpha) << endl;
	}

	~RGBA() {}
};

// Task 3
class Stack {
private:
	int* m_array;
	int m_length;

public:	

	Stack()
	{
		m_length = 10;
		m_array = new int[m_length];
	}

	void reset()
	{
		for (int i = 0; i < m_length; i++)
		{
			m_array[i] = 0;
		}
	}

	bool push(int x)
	{
		for (int i = 0; i < m_length; i++)
		{
			if (m_array[i] == 0)
			{
				m_array[i] = x;
				break;
				return true;
			}
			if (i == m_length)
			{
				break;
				return false;
			}
		}
		return true;
	}

	void pop()
	{
		for (int i = 0; i < m_length; i++)
		{
			if (m_array[0] == 0)
			{
				cout << "Stack is empty" << endl;
				break;
			}
			if (m_array[i] == 0)
			{
				i--;
				m_array[i] = 0;
				break;
			}
		}
	}

	void print()
	{
		cout << "( ";
		for (int i = 0; i < m_length; i++)
		{
			if (m_array[i] > 0)
			{
				cout << m_array[i] << " ";
			}
		}
		cout << ")" << endl;
	}
	~Stack() {}
};

int main()
{
	// Task 1
	Power ultimate;
	ultimate.set();
	float a = ultimate.calculate();
	cout << a << endl;

	// Task 2
	RGBA pixel(234, 112, 16, 200);
	pixel.print();

	// Task 3
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	system("pause");
	return 0;
}