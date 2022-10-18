void Solution::rotate(vector<vector<int> > &A) {
    int n=A.size();
    //vector<int>x(n,0);
    vector<vector<int>>C(n,vector<int>(n,0));
    for(int i=0;i<A.size();i++){
        for(int j=A.size()-1;j>=0;j--){
            C[j][A.size()-i-1]=A[i][j];
        }
    }
    A=C;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
