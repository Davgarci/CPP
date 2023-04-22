#include <iostream>

template <typename T>
class Array{
	public:
		Array()
		{
			this->a = NULL;
			this->lenght = 0;
		}
		Array(uint n)
		{
			this->a = new T[n];
			this->lenght = n;
		}
		Array(Array &instance)
		{
			
		}
		Array &operator=(Array &instance)
		{
			
			return(*this);
		}
	//private:	
		T	*a;
		int lenght;
};

void	print_array(int *a, int len)
{
	std::cout << "[ ";
	for (int i = 0; i < len; i++)
		std::cout << a[i]  << " ";
	std::cout << "]"<<std::endl;
	
}

int main()
{
	Array<int> a(3, 4);
	Array<int> b(10,12);

	print_array(a.a, 3);
	print_array(b.a, 10);

	b = a;

	print_array(a.a, 3);
	print_array(b.a, 3);

	a.a[0] = 99999;

	print_array(a.a, 3);
	print_array(b.a, 3);

}