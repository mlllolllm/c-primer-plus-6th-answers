#include <iostream>
#include <string>

class Cpmv {
public:
	struct Info {
		std::string qcode;
		std::string zcode;
	};

private:
	Info *pi;

public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv & cp);
	Cpmv(Cpmv && mv);
	~Cpmv();
	Cpmv & operator=(const Cpmv & cp);
	Cpmv & operator=(Cpmv && mv);
	Cpmv operator+(const Cpmv & obj) const;

	void Display() const;
};

Cpmv::Cpmv() : pi(nullptr) {
	std::cout << "Default constructor called" << std::endl;
}

Cpmv::Cpmv(std::string q, std::string z) : pi(new Info{ q, z }) {
	std::cout << "Constructor called" << std::endl;
}

Cpmv::Cpmv(const Cpmv & cp) : pi(new Info(*cp.pi)) {
	std::cout << "Copy constructor called" << std::endl;
}

Cpmv::Cpmv(Cpmv && mv) : pi(mv.pi) {
	mv.pi = nullptr;
	std::cout << "Move constructor called" << std::endl;
}

Cpmv::~Cpmv() {
	delete pi;
	std::cout << "Destructor called" << std::endl;
}

Cpmv & Cpmv::operator=(const Cpmv & cp) {
	if (this == &cp) {
		return *this;
	}
	delete pi;
	pi = new Info(*cp.pi);
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv) {
	if (this == &mv) {
		return *this;
	}
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	std::cout << "Move assignment operator called" << std::endl;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const {
	std::string newQcode = pi->qcode + obj.pi->qcode;
	std::string newZcode = pi->zcode + obj.pi->zcode;
	std::cout << "Operator+ called" << std::endl;
	return Cpmv(newQcode, newZcode);
}

void Cpmv::Display() const {
	std::cout << "qcode: " << pi->qcode << ", zcode: " << pi->zcode << std::endl;
}

int main() {
	Cpmv a("q111", "z111");
	Cpmv b("q222", "z222");
	Cpmv c;

	c = a + b;

	std::cout << "a: ";
	a.Display();
	std::cout << "b: ";
	b.Display();
	std::cout << "c: ";
	c.Display();

	system("pause");
	return 0;
}
