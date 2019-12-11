int solution(int K, vector<int> &A) {
    int ropeSum=0,temp=0;
    
    for(int i=0; i<A.size(); i++)
    {
        temp+=A[i];
        if(temp >= K){
            ropeSum++;
            temp=0;
        }
    }
    
    return ropeSum;
}