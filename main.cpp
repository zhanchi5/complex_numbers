#include <iostream>


class complex {

double x;
double y;
public:


double give_x(){

  return x;
}

double give_y(){

  return y;
}


complex(){
        x =0;
        y =0;
}

complex(double fst,double sec){
        x = fst;
        y = sec;
}


void sum(complex number){
  x += number.give_x();
  y += number.give_y();
}

void sub(complex number){
  x -= number.give_x();
  y -= number.give_y();
}

void mult(int number){
  x *= number;
  y *= number;
}

void div(int number){
  if (number){
    x /= number;
    y /= number;
  }
  else{
    std::cout << "Can`t divide by zero" << '\n';
  }

}

void mult_complex(complex number){
  double buf = x;
  x = x*number.give_x() - y*number.give_y();
  y = buf*number.give_y() + y*number.give_x();
}

void print(){
  std::cout << x << "+i*( " << y  << ")" << std::endl;
}

};

int main() {
      complex number1(0,1);
      complex number2(0,1);

        number1.mult_complex(number2);
        number1.print();

      number1.sum(number2);
      number1.print();

      number1.sum(number2);
      number1.sub(number2);
      number1.print();

      number1.mult(5);
      number1.print();



      number1.div(2);
      number1.print();


      return 0;
}
