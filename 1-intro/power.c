int power(int x, int y){
    int i, ret;

    i = 0;
    ret = 1;
    while(i < y){
        ret = ret * x;
        i = i + 1;
    }

    return ret;
}