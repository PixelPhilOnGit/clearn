int mod(int a, int b){
    return a % b;
}

int add(int a, int b){
    int res = mod(a, b);
    return res + b;
}

void main() {
    int a = 3;
    int b = 2;
    int c = add(a, b);
}