#include <iostream>
using namespace std;

double rerata(double a, double b) {
  return (a + b)/2;
}

string status(double r) {
  if (r >= 60) {
    return "lulus";
  }else {
    return "gagal";
  }
}

string status2(double r, double n) {
  if (r >= 60 && n >= 70) {
    return "lulus";
  }else {
    return "gagal";
  }
}

string status3(double r, double n) {
  if (r >= 60 || n >= 70) {
    return "lulus";
  }else {
    return "gagal";
  }
}

int main (){
  double nilmath, nilbin;

  cout << "Masukan Nilai Matematika : ";
  cin >> nilmath;
  cout << "Masukkan Nilai Bahasa : ";
  cin >> nilbin;

  cout << "Nilai Rerata : " << rerata(nilmath, nilbin);
  cout << "\nStatus Kelulusan : " << status(rerata(nilmath, nilbin));
  cout << "\nStatus kelulusan : " << status2(rerata(nilmath, nilbin), nilmath);
  cout << "\nStatus kelulusan : " << status3(rerata(nilmath, nilbin), nilmath);
}