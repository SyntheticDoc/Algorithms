
int euklid(int m, int n) {
    int r; // remainder

    while(true) {
        r = m % n;

        if(r == 0) {
            return n;
        } else {
            m = n;
            n = r;
        }
    }
}