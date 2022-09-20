// Time Complexity : O(N^2)

#include <iostream>
#include <cmath>
using namespace std;

void subArraySum(int arr[], int n) {
    //Prefix sum
    int prefix[100] = {0} ;
    prefix[0] = arr[0] ;
    for(int i = 1 ; i < n ; i++) {
        prefix[i] = prefix[i-1] + arr[i] ;
    }

    //Greatest Sum
    int lrg = arr[0] ;
    for(int i = 0 ; i < n ; i++) {
        for(int j = i ; j < n ; j++) {
            int sum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j] ;
            lrg = max(lrg, sum) ;
        }
    }
    cout <<"Greatest is " <<lrg <<endl ;
}

int main() {
	int arr[] = {10,20,10} ;
	int n = 3 ;
	subArraySum(arr,n) ;
	return 0 ;
}

