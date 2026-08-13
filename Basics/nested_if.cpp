int age;
cin >> age;

if (age >= 18) {

    if (age >= 60) {
        cout << "Senior Citizen";
    }
    else {
        cout << "Adult";
    }

}
else {
    cout << "Minor";
}