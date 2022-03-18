/*
g++ drill15.2.cpp -o drill15.2
*/

#include "std_lib_facilities.h"

struct Person {
private:
  string fnme;
  string lnme;
  int ag;
public:
  Person() {};
  Person(string fnm, string lnm, int aa);

  string fname() const { return fnme; }
  string lname() const { return lnme; }
  int age() const { return ag; }
};

Person::Person(string fn, string ln,int aa): fnme(fn), lnme(ln), ag(aa){
  if (aa < 0 || aa > 150) {
    error("Age: out_of_range");
  }

  string nn = fn + ln;
  for (int i = 0; i < nn.length(); i++) {
    switch (nn[i]) {
      case ';': case ':': case '"': case '[': case ']': case '*':
      case '&': case '^': case '%': case '$': case '#': case '@': case '!':
        error("Name: Illegal_character");
        break;
      default:
        break;
    }
  }
}
ostream& operator<<(ostream& os, Person& p){
  os << p.fname() << ' ' << p.lname() << ' ' << p.age();
  return os;
}

istream& operator>>(istream& is, Person& p){
  string fn, ln;
  int a;
  is >> fn >> ln >> a;
  if (!is && ln != "end") error("Not a correct order!");
  p = Person(fn, ln, a);
  return is;
}

int main()
try {
  /*Person p;
  p.name = "Goofy";
  p.age = 63;*/

  /*Person inp_per;
  cin >> inp_per;
  cout << inp_per << endl;*/

  vector<Person> vec;
  cout << "Enter some names(fname,lname) and ages. Stop with: | end | \n ";
  for (Person per; cin >> per;)
  {
    if (per.fname() == "| end |") break;
    vec.push_back(per);
  }

  cout << "Entered names and ages: \n";
  for (Person j : vec) {
    cout << j << endl;
  }

}
catch(exception& e){
  cerr << "exception: " << e.what() << endl;
  return 1;
}
catch(...){
  cerr << "Unknown exception!" << endl;
  return 2;
}
