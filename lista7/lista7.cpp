#include <iostream>
#include <locale>
using namespace std;

//void salario(int a, int b, int c);
//int main()
//{
//	int numFunc;
//	locale::global(locale("pt_BR.UTF-8"));
//	int salario1 = 100 * 5;
//	int salario2 = 200 * 20;
//	cout << "Qual é o seu número de funcionário ";
//	cin >> numFunc;
//	cout << "O seu salário é " , salario(salario1, salario2, numFunc);
//
//}
//
//void salario(int a, int b, int c) {
//	if (c == 25) {
//		cout << a;
//	}
//	else if (c == 10) {
//		cout << b;
//	}
//	else {
//		cout << "inexistente";
//	}
//}

//double precos(int a,int b,int c);
//int main() {
//	int batata;
//	int alface;
//	int tomate;
//	cout << "quantas batatas tu vai querer? ";
//	cin >> batata;
//	cout << "quantos alfaces tu vai querer? ";
//	cin >> alface;
//	cout << "quantos tomates tu vai querer? ";
//	cin >> tomate;
//	double calculo = precos(batata, alface, tomate);
//	cout << "Sua compra foi de " << calculo;
//}
//double precos(int a, int b, int c) {
//	double preco1 = a * 2.50;
//	double preco2 = b * 5;
//	double preco3 = c * 3.50;
//	return preco1 + preco2 + preco3;
//}


double triangulo(double a, double c);
double circulo(double c);
double trapezio(double a, double b, double c);
double quadrado(double b);
double retangulo(double a, double c);

int main() {
	locale::global(locale("pt_BR.UTF-8"));
	double num1, num2, num3;

	cout << "Informe o valor de A: ";
	cin >> num1;
	cout << "Informe o valor de B: ";
	cin >> num2;
	cout << "Informe o valor de C: ";
	cin >> num3;

	double resultado1 = triangulo(num1, num3);
	double resultado2 = circulo(num3);
	double resultado3 = trapezio(num1, num2, num3);
	double resultado4 = quadrado(num2);
	double resultado5 = retangulo(num1, num2);

	cout << " Triângulo: " << resultado1;
	cout << "\n Círculo: " << resultado2;
	cout << "\n Trapézio: " << resultado3;
	cout << "\n Quadrado: " << resultado4;
	cout << "\n Retângulo: " << resultado5;

}

double triangulo(double a, double c) {
	return (a * c) / 2.0;
}

double circulo(double c) {
	return 3.14159 * c * c;
}

double trapezio(double a, double b, double c) {
	return (a + b) / 2.0 * c;
}

double quadrado(double b) {
	return b * b;
}

double retangulo(double a, double b) {
	return a * b;
}