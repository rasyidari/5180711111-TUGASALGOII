#include <iostream>
using namespace::std;

void Merge(int A[], int B[], int C[], int N, int M, int &K);


int main()
{
	int A[100], B[100], C[200],i,n,m,k;

	cout<<"\nMasukkan angka yang anda inginkan = ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"Masukkan angka "<<i+1<<":";
		cin>>A[i];
	}

	cout<<"\nMasukkan angka yang anda inginkan = ";
	cin>>m;

	for(i=0;i<m;i++)
	{
		cout<<"Masukkan angka "<<i+1<<":";
		cin>>B[i];
	}

	Merge(A,B,C,n,m,k);

	for(i=0;i<k;i++)
	{
		cout<<C[i]<<" ";
	}

	return 0;
}


void Merge(int A[], int B[], int C[], int N, int M, int &K)
{
	int I=0, J=0;
	K=0;

	while (I<N && J<M)
	{
		if (A[I]>B[J])
			C[K++]=A[I++];
		else if (A[I]<B[J])
			C[K++]=B[J++];
		else
		{
			C[K++]=A[I++];
			J++;
		}
	}

	for (int T=I;T<N;T++)
		C[K++]=A[T];
	for (int T=J;T<M;T++)
		C[K++]=B[T];
}
