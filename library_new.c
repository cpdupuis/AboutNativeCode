int fibonacci(int n) {
    if (n < 2) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int fact(int n) {
    if (n < 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}

int getVersion() {
    return 2;
}
