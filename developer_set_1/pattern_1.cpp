int main() {
   int n=4;
   for(int i=0;i<n;i++){
       // for(int space=0;space<n*i;space++) cout<<" ";
       for(int j=0;j<n;j++){
           for(int space=0;space<n*i;space++) cout<<" ";
           for(int k=0;k<=j;k++) cout<<"*";
           cout<<"\n";
       }
   }
}
