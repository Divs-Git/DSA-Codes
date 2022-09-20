// Time complexity : O(N^3)

#include <iostream>
using namespace std;

void subArraySum(int arr[], int n) {
	int lrg = arr[0] ;
	for(int i = 0 ; i < n ; i++) {
		for(int j = i ; j < n ; j++) {
			int sum = 0 ;
			for(int k = i ; k <= j ; k++) {
				sum += arr[k] ;
			}
			cout <<sum <<" " ;
			if(sum > lrg) lrg = sum ;
		}
		cout <<endl ;
	}
	cout <<"Greatest is " <<lrg <<endl ;
}

int main() {
	int arr[] = {10,-20,30,-40,-50} ;
	int n = 5 ;
	subArraySum(arr,n) ;
	return 0 ;
}

