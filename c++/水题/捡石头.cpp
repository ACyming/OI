#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int T, n, m, a[10100], num[10100], s[10100], k;

int main(){
	scanf ("%d", &T);
	while (T--)
	{
    	scanf ("%d%d", &n, &m);
    	for (int i = 1; i <= n; i++)
    	    scanf ("%d", &a[i]);
    	sort (a + 1, a + 1 + n);
    	
    	memset (s, 0, sizeof (s));
    	memset (num, 0, sizeof (num));
    	for (int i = n; i; i--)
    	    if (a[i] == a[i + 1])
    	        s[i] = s[i + 1] + 1, num[i] = num[i + 1] + 1;//s??a[i] + 1????, num??a[i]???????
    	    else s[i] = 1, num[i] = 1;
    	k = m;
    	for (int i = 1; i <= n; i++)
    	    if (a[i] != a[i - 1] && k == m)
    	    	while (num[i])
    	    	{
    	    		int j = i;
    	    		k = 1;
    	    		num[i]--;
    	    		while (k < m && j < n)
    	    			if (num[j + s[j]] && a[j + s[j]] == a[j] + 1)
    	    			    num[j + s[j]]--, k++, j += s[j];//???
    	    			else break;
    	    		if (k < m) break;
		    	}
		if (k == m) printf ("true\n");
		   else printf ("false\n");
	}
}
