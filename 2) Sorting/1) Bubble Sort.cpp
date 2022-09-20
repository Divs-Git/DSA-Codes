//Time Complexity : O(N^2)

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int a[], int n)
    {
        for(int i = 1; i <= n-1 ; i++) {
            for(int j = 0 ; j <= n-i-1 ; j++) {
                if(a[j] > a[j+1]) {
                    swap(a[j], a[j+1]) ;
                }
            }
        }
    }
};