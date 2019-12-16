#include <algorithm>

int solution(vector<int> &A) {
    const int N = A.size();

    int counter = 0;
    std::sort(A.begin(), A.end());
    
    for (int i=0; i<(N-2); i++) {
        int k = i+2;
       
        for (int j=(i+1); j<(N-1); j++) {
            while ( (k<N) && (A[i] > (A[k]-A[j])) ) {
                k++;
            }
            counter += (k-j-1);
        }
    }
    return counter;
}