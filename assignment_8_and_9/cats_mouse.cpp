string catAndMouse(int x, int y, int z) {
    if(abs(x-z)<abs(y-z)) return "Cat A";
    else if (abs(x-z)>abs(y-z)) return "Cat B";
    return "Mouse C"; 

}
