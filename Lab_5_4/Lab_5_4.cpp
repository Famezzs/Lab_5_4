// Lab_5_4.cpp
// Козубенко Андрій
// Лабораторна робота № 5.4
// Обчислення сум та добутків за допомогою рекурсії.
// Варіант 10
#include <iostream>
#include <iomanip>

using namespace std;

double S1(const int N, const int K, const int i, double t)
{
	t *= (1. * i * N) / (1. * i * i + 1. * N * N);
	if (i <= N)
		return t;
	else
		return S1(N, K, i - 1, t);
}

double S2(const int N, const int K, const int i, double t)
{
	t *= (1. * i * N) / (1. * i * i + 1. * N * N);
	if (i >= K)
		return t;
	else
		return S2(N, K, i + 1, t);
}

double S3(const int N, const int K, const int i)
{
	if (i < N)
		return 1;
	else
		return (1. * i * N) / (1. * i * i + 1. * N * N) * S3(N, K, i - 1);
}

double S4(const int N, const int K, const int i)
{
	if (i > K)
		return 1;
	else
		return (1. * i * N) / (1. * i * i + 1. * N * N) * S4(N, K, i + 1);
}

double S5(const int N, const int K)
{
	double P = 1;

	for (int i = N; i <= K; i++)
	{
		P *= (1. * i * N) / (1. * i * i + 1. * N * N);
	}

	return P;
}

int main()
{
	int N;
	cout << "N = "; cin >> N;

	cout << "(rec down --) P1 = " << setw(8) << right << S1(N, 16, 16, 1) << endl;
	cout << "(rec down ++) P2 = " << setw(8) << right << S2(N, 16, N, 1) << endl;
	cout << "(rec up --)   P3 = " << setw(8) << right << S3(N, 16, 16) << endl;
	cout << "(rec up ++)   P4 = " << setw(8) << right << S4(N, 16, N) << endl;
	cout << "(iter)        P5 = " << setw(8) << right << S5(N, 16) << endl;

	return 0;
}