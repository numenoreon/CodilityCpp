#include <algorithm>
#include <vector>

int helpCompute(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return helpCompute(b,a%b);
}

bool commonPrimeDivide(int a, int b)
{
    int ab=helpCompute(a,b);
    
    while(a!=1)
    {
        int ba=helpCompute(a,ab);
        
        if(ba==1)
            break;
            
        a/=ba;
    }
    if(a!=1)
        return false;
        
    while(b!=1)
    {
        int abc=helpCompute(b,ab);
        
        if(abc==1)
            break;
        b/=abc;
    }
    
    if(b!=1)
        return false;
        
    return true;
}

int solution(vector<int> &A, vector<int> &B) {

    int counter = 0;
    const int N=A.size();
    
    for (int i=0; i<N;i++)
    {
        if(commonPrimeDivide(A[i],B[i]))
            counter+=1;
    }
    
    return counter;
 
    
}