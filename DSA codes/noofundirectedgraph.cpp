int countingGraphs(int N)
{
    // Write your code here.
    return pow(2,N+(N*(N-3))/2);
}