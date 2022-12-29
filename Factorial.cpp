int fact(int n){
    if(n==0||n==1) return 1;   // IBH Approach
    return n*fact(n-1);
}
int main() {
    int n;
    cin>>n;    // to take the input by this function
    cout<<fact(n)<<endl;  // calling the function which on line no 1
    int m;
    cin>>m;
    cout<<fact(m)<<endl;
    int z;
    cin>>z;
    cout<<fact(z)<<endl;  // end of line
    cout<<"thanks"<<endl;
}
