#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int min(int B[], int n);

int main()
{
	setlocale(0, "");
	int l,x;
	int n=0;
	int i=0;
	cout << "Введите размерность массива n= ";
	cin >> n;
	int* A= new int[n];
	int* C = new int[n];
	int* D = new int[n];
	
	cout << "Введите значения A[n]" << endl;
	for (int i = 0; i < n; i++) 
	{
		cin >> A[i];
	}
	cout << "Введите значения C[n]" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> C[i];
	}
	for (i = 0; i < n; i++)
	   {
		if (A[i] > C[i])
			D[i] = A[i];
		else if (A[i] < C[i])
			D[i] = C[i];
		else D[i] = 0;
	   }
	cout << "A[i]" <<setw(10)<<"C[i]"<<setw(10)<<"D[i]"<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i]<<setw(10)<<C[i]<<setw(10)<<D[i]<<endl;
	}
	cout<< "Минимальное значение массива D[n]= "<<min(D, n) << endl;
	l = D[n - 1];
	x = 0;
	for (i = 0; i < n; i++)
	{
		if (D[i] == min(D, n))
			x= i;	
	}
	D[n-1] = min(D, n);
	D[x] = l;
	cout << "Значит, получаем следующий массив D[n]" << endl;
	for (i = 0; i < n; i++)
	{
		cout << D[i]<< endl;
	}	
	system("pause");	
	delete[] A;
	delete[] C;
	delete[] D;
	return 0;
}

int min(int B[], int n)
{
	int k;
	k = B[0];
	for (int i = 1; i < n;i++)
	{
		if (B[i] < k)
		{
			k = B[i];			
		}
		else k=k;
	}
	return k;
}
