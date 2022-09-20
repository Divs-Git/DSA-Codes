// Time Complexity : O(N)

#include <iostream>
#include <cmath>
using namespace std;

void subArraySum(int arr[], int n) {
    int currentSum = 0 ;
    int maximumSum = 0 ;
    for(int i = 0 ; i < n ; i++) {
        currentSum = currentSum + arr[i] ;
        if(currentSum < 0) currentSum = 0 ;
        maximumSum = max(maximumSum, currentSum) ;
    }
    cout <<"Greatest is " <<maximumSum <<endl ;
}

int main() {
	int arr[] = {10,-10,10} ;
	int n = 3 ;
	subArraySum(arr,n) ;
	return 0 ;
}

