template <typename T>
T gcd(T a, T b)
{
	T k;
	while(b)
	{
		a %= b;
		k = a;
		a = b;
		b = k;
	}
	return a;
}
  