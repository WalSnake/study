#include <iostream>
// Task #1
class Person {
protected:
	Person () {}
	std::string name;
	std::string sex;
	int age;
	int weight;
public:
	Person(std::string name, std::string sex, int age, int weight) {
		this->name = name;
		this->sex = sex;
		this->age = age;
		this->weight = weight;
	}
	void setName(std::string name) { name = name; }
	void setAge(int age) { age = age; }
	void setWeight(int weight) { weight = weight; }
	std::string getName() { 
		return name; 
	}
	std::string getSex() { 
		return sex; 
	}
	int getAge() { 
		return age; 
	}
	int getWeight() { 
		return weight; 
	}
};

int studentCounter = 0;

class Student : public Person {
protected:
	Student() {}
	int yearOfStudy;
public:
	Student(std::string name, std::string sex, int age, int weight, int yearOfStudy) {
		this->yearOfStudy = yearOfStudy;
		this->name = name;
		this->sex = sex;
		this->age = age;
		this->weight = weight;
		studentCounter++;
	}
	void setYearOfStudy(int yearOfStudy) {
		this->yearOfStudy = yearOfStudy;
	};
	void increaseYearOfStudy() {
		this->yearOfStudy = yearOfStudy;
		yearOfStudy++;
	}
	int getYearOfStudy() {
		return yearOfStudy;
	}
	void printInfo() {
		std::cout << getName() << ", " << getSex() << ", " << getAge() << " years, " << getWeight() << " kg, " << getYearOfStudy() << " year of study;" << std::endl;
	}
};

//Task #2
class Fruit {
public:
	Fruit() {}
	std::string name;
	std::string color;
	std::string getName() {
		return name;
	}
	std::string getColor() {
		return color;
	};
};
class Apple : public Fruit {
public:
	Apple() {
		name = "apple";
		color = "red";
	}
	Apple(std::string color) {
		this->color = color;
		name = "apple";
	}
};
class Banana : public Fruit {
public:
	Banana() {
		name = "banana";
		color = "yellow";
	}
};
class GrannySmith : public Apple {
public:
	GrannySmith() {
		name = "Granny Smith "+name;
		color = "green";
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	//Task #1
	Student s1("John Doe", "Male", 20, 70, 3);
	Student s2("Jane Doe", "Female", 19, 54, 2);
	Student s3("Harry Potter", "Male", 22, 68, 10);
	std::cout << "Total count of created students: " << studentCounter << std::endl;
	s1.printInfo();
	s2.printInfo();
	s3.printInfo();
	
	std::cout << std::endl;
	// Task #2
	
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	system("pause");
}
/*
Task #3

В игре я, думаю, можно начать с класса "карты", и в будущем, если захочется, его можно будет использовать при реализации других карточных игр.
Это будет массив, содержащий все варианты карт. От этого класса будет наследоваться класс "колода" с функционалом стека, 
который будет поочерёдно заполняться посредством функции random из массива "карты", при этом надо допольнительно прописать какой-то механизм защиты от повторов. 
Возможно стоит создать массив указателей на массив "карты" и по мере заполнения стека удалять из массива указатели, который уже были выбраны. 
Ну и на этом, как мне кажется, хватит. Этих двух классов, по-моему, должно быть достаточно. Можно было бы ещё насоздавать дочерних классов "масть", "цифры", 
"картинки", но они не будут нести пользу для реализации BlackJack.
Игровой процесс будет реализован через pull запросы в стек, и добавление их массивы, можно и без класса, "рука игрока" и "рука дилера", 
члены которых будут складываться в соответствии со значениями, описанными в классе "карты". И при превышении порогового значения, описанного в функции "игра",
хозяин "руки" будет признан проигравшим. При недоборе до 21 очка, игрок сможет выбирать, либо продолжать брать карты, либо отказаться. Сдающий будер решать: 
добирать карту или нет через булевое значение вывода функции random, где шанс выпадения единицы будет отдельно описан для разного количества очков в "руке диллера".
И при выпадении нуля, тур заканчивается и сравниваеются суммы очков. У кого больше, тот победил. У кого 21, разумеется, тоже победил. При выпадении джокера, производится подсчёт:
является ли разница 21 и "руки игрока/дилера" больше либо равна 11, если да, то джокер равен 11, если нет, то 1. Следующий тур игры продолжается с тем же стеком. 
При извлечении из стека последнего объекта, стек переинициализируется функцией random. Завершение игры, когда игроку надоест. Либо можно усложнить код, добавив элемент со ставками,
Для этого может пригодиться класс "деньги", в котором будут переменные "деньги диллера", "деньги игрока", "ставка" и "банк"
*/