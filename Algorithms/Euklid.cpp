// Calculates the greatest common factor of numbers a and b by euclid's algorithm.
//
// SOURCE: Knuth, D., 2020. The Art of Computer Programming, Volume 1, Fundamental Algorithms. 3rd ed. Addison-Wesley, p.2.
int euklid(int m, int n) {
    int r; // remainder, set to -1 to prevent exiting the while loop on its very first iteration

    while(true) {
        r = m % n;

        if(r == 0) {
            return n;
        }

        m = n;
        n = r;
    }
}