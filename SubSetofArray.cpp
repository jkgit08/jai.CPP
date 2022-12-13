#include <bits/stdc++.h>
#include<iostream.h>
#include<conio.h>

int isSubset(int arr1[], int arr2[], int m, int n){     //bool
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr2[i] == arr1[j])
				break;
		}
		if (j == m)      /* If the above inner loop was	not broken at all then arr2[i]	is not present in arr1[] */
			return 0;
	}
	return 1;                 /* If we reach here then all elements of arr2[] are present	in arr1[] */
}

// Driver code
int main(){
	int arr1[] = { 11, 1, 13, 21, 3, 7 };
	int arr2[] = { 11, 3, 7, 1 };

	int m =6 ;  // sizeof(arr1) / sizeof(arr1[0]);
	int n =4;    //sizeof(arr2) / sizeof(arr2[0]);

	if (isSubset(arr1, arr2, m, n))
		cout<<"arr2[] is subset of arr1[] ";
	else
		cout<<"arr2[] is not a subset of arr1[]";

	getch();
	return 0;
}
