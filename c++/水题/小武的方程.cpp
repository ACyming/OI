#include <iostream>
#include <cstdio>

using namespace std;

long long T, n, m;

int main(){
	scanf ("%lld", &T);
	while (T--)
	{
		scanf ("%lld%lld", &n, &m);
		if ((m >= n) && ((n | (m - n)) == n))//? ?? 
		    printf ("Possible\n");
		   else printf ("Impossible\n");
	}
}
