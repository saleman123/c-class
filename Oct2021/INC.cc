#include <iostream>
#include <vector>

using std::cout;
using std::endl;

class mem
{
  protected:
   string f_n, l_n,e id;
   int age;
  double h,l;

  public:
   mem() {};
   mem(string f_l, string l_n, string e, int a)
   {
    f_n = f_name;
    l_n = l_name;
    eid = e;
    age = a;
   };
} 

class Ve
{
 protected:
  bool has_v;
  string lic_pl, exp_date;
  char tag_type;

 public:
  Ve() {}

};

class St : public mem, public Ve
{
 private:
  int grad_yr;
  vector<string> enr_cl;

 public:
  St () {}
  void add_cl(string new_class)
  {
   enr_cl.push_back(new_class);
  }

  void print_classes()
  {
   for ( auto c: enr_cl)
     cout << c <<endl;
  }
};

class Staff : public mem, public Ve
{
 private:
  float salary;
  int leave_day;
  bool has_tenure;

 public:
  Staff () {}
  Staff(string f_name, string l_name, string e, int a, float sal, int leave): mem(f_name, l_name, e, a) {
     salary = sal;
     leave_days = leave;
    }
 void add_veh(){has_veh = true;}}
};

int main()
{
 Student matt;
 matt.add_cl("SDS322");
 matt.add.cl("SDS322");

 matt.print_classes();
 Staff charlie();


 return 0;
}
