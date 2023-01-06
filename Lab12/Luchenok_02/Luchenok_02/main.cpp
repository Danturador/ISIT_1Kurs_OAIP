#include <iostream>
void main()
{
	/*
	double w, d, a = 1.5, x = -1.8, z = 15 * 10e-9;
	w = tan(1) * (1 + x) + z - exp(a);
	d = 9 * sqrt(2 - 3 * x) + abs(a + 1);
	std::cout << "w = " << w;
	std::cout << " d = " << d;
	
	//Задание 5 В14
	double w, v, s, a = 1.5, b = -8.1, j = 4, t = 4 * 10e-8;
	s = sqrt((t * a) / (t + 1)) + 4 * exp(2 - b);
	w = s * a / (1 + 0.1 * a);
	v = s + j * sqrt(pow(a, 2) * pow(b, 2));

	std::cout << " s = " << s;
	std::cout << " w = " << w;
	std::cout << " v = " << v;
	// Задание 4 В16
	double y, w, m = 6, z = 0.05 * 10e-4;
	y = cos(5 * m) / pow(sin(0.4 * m), 2);
	w = 4 * z * y - 7 * exp(-2 * y);

	std::cout << " w = " << w;
	std::cout << " y = " << y;
	
	// Задание 5 В3
	double d, f, i = -6, x = 4.5, z = 1.5 * 10e-6;
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2 * d) / d;

	std::cout << " d = " << d;
	std::cout << " f = " << f;
	// Задание 4 В 12
	  /*float t, u, k = 6, r = 5 * 10e-7, x = 0.095;
	  t = tan(x) + r * (1 - log(x));
	  u = t / (pow(x, 3) + 1) / (1 - exp(k - 4));
	  std::cout << "t = " << t;
	  std::cout << "u = " << u;*/

	  // Задание 5 В 15
	  /*float y, r, a = 1.75, b = 4.5 * 10e-4;
	  y = a * exp((-2) * b) - sqrt(1 + a);
	  r = log(1 + 20 * b) / (1 + a);
	  std::cout << "y = " << y;
	  std::cout << "r = " << r;*/

	  // В1
	  /*float t, u, k = 4, x = 2 * 10e-4, a = 8.1;
	  t = 2 * k / a + log(2 + x);
	  u = sqrt(k - 1) / (t + 1);
	  std::cout << "t = " << t;
	  std::cout << "u = " << u; */

	  //В4
	  float p, q, t = 6, x = 0.4 * 10e6, y = -1.2;
	  p = 2.6 * t + cos(y / (3 * x + y));
	  q = sin(t) / cos(t);
	  std::cout << "p = " << p;
	  std::cout << "q = " << q;
}
