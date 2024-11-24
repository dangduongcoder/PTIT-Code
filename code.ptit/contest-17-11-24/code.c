int nt[1000000 + 2];

void snt() {

    for (int i = 0 ; i <= 1000000 ; i ++) {
        nt[i] = 1;
    }

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i * i <= 1000000 ; i ++) {
        if (nt[i]) {
            for (int j = i * i ; j <= 1000000 ; j += i) {
                nt[j] = 0;
            }
        }
    }

}