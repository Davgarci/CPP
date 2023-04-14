#include <iostream>
#include <iomanip>
#include <string>

/* ******************************USO 1******************************** */
// Esto es legal porque this pasa a ser un Student * (puntero a Student)
class Student
{
	public:
		Student(int b) { a = 100; }
		int a;
		void function() const { const_cast<Student *>(this)->a = 0; }
		void other(Student &A) { std::cout << A.a << std::endl; }
};

// Esto no es legal porque aquí this es un const Student * (puntero constante a Student),
// no un Student * (puntero a Student)
// class Student
// {
// 	int a;
// 	void function() const { this->a = 0; }
// };

// Esto no es legal porque a es un miembro constante de la clase
// class Student
// {
// 	const int a;
// 	void function() const { const_cast<Student *>(this)->a = 0; }
// };

/* ******************************USO 2******************************** */
// Pasar por parámetro algo const que va a ser recibido como algo no const
// Recuerda que esto solo hace falta cuando lo pasamos como referencia,
// porque si no el casteo se hace solo de forma implícita

// NUNCA USAR ESTE CASTEO PARA CAMBIAR EL VALOR DE ALGO CONSTANTE

int main()
{
	const int		b = 10;
	Student			instance(b);
	const Student	A(b);
	instance.other(const_cast<Student&>(A));
}
 