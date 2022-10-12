int pageCount(int n, int p) {
    // int c= p%2;
    // if(c!=0){
    //     if(p>1 && p<n){
            
    //     }
    // }
    if (p == 1 || p ==n) return 0;
    int a = n-p;
    int b = p -1;
    int c;
    if (b<a){
        // if (p%2 ==0 ){
             c = p/2;
        // }
        // else {
        //     c = 
        // }
     //   return c;
    }
    else if((n-p)==1 && n%2==0) return 1;
    else if ((n-p) == 1) return 0;
   // else if((n-p)==1 && n%2==0) return 1;
    else {
        c = (n-p)/2;
    }
    return c;
}
