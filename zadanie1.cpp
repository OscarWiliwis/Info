#include <iostream>
using namespace std;

int wpisz, wpisz1, wpisz2;

void kwadrat() {

    cout << "Wpisz aby obliczyć obwód kwadratu" << endl;
        cin >> wpisz;
        cout << wpisz * 4 << endl;

    cout << "Wpisz aby obliczyc pole kwadrat" << endl;
    cin >> wpisz;
    cout << wpisz * wpisz << endl;
}
void prostokat() {
    cout << "Wpisz aby obliczyć obwód prostokąta" << endl;
    cin >> wpisz >> wpisz2;
    cout << wpisz + wpisz2 << endl;

    cout << "Podaj aby obliczyc pole prostokata" << endl;
    cin >> wpisz >> wpisz1;
    cout << wpisz * wpisz1 << endl;
}
void trojkatp() {
    cout << "Wpisz aby obliczyć obwód trójkąta prostokątnego" << endl;
    cin >> wpisz >> wpisz1 >> wpisz2;
    cout << wpisz + wpisz1 + wpisz2 << endl;

    cout << "Podaj aby obliczyc pole trojkata prostokatnego" << endl;
    cin >> wpisz >> wpisz1;
    cout << wpisz * wpisz1 / 2 << endl;
}
void romb() {
    cout << "Podaj aby obliczyc pole rombu" << endl;
    cin >> wpisz;
    cout << wpisz * 4 << endl;

    cout << "Podaj aby obliczyc pole rombu" << endl;
    cin >> wpisz >> wpisz1;
    cout << wpisz * wpisz1 << endl;
}
void trojkat() {
    cout << "Podaj aby obliczyc pole trojkatu" << endl;
    cin >> wpisz >> wpisz1;
    cout << wpisz * wpisz1 / 2<< endl;
}
void trapez() {
    cout << "Podaj aby obliczyc pole trapezu" << endl;
    cin >> wpisz >> wpisz1 >> wpisz2 ;
    cout << (wpisz + wpisz1) * wpisz2 / 2 << endl;
}
int main()

{
    setlocale(LC_CTYPE, "Polish");
    kwadrat();
    prostokat();
    trojkatp();
    romb();
    trojkat();
    trapez();

}
