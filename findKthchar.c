char kthCharacter(int k) {
    int x = k - 1;
    int cnt = 0;

    while (x) {
        cnt += x & 1;
        x >>= 1;
    }

    return 'a' + cnt;
}
