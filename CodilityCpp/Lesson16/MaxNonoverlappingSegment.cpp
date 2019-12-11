int solution(vector<int> &A, vector<int> &B) {
    const int N = A.size();
    
    if (N < 2) {
        return N;
    }
    
    int result=1, temp=B[0];
    
    for(int i=1; i<N; i++)
    {
        if(temp<A[i])
        {
            result++;
            temp=B[i];
        }
    }  
    return result;
}