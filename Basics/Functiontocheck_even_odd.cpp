bool isEven(int n) {

    if (n % 2 == 0)
        return true;

    return false;
}

int main() {

    int n;
    cin >> n;

    if (isEven(n))
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}