#include<iostream>


using namespace std;


 
float add(float n1, float n2)
 
{
  return n1 + n2;
}

float subtract(float n1, float n2)
 
{
  return n1 - n2;
}

float multiply(float n1, float n2)
 
{
  return n1 * n2;
}

float divide(float n1, float n2)
 
{
  return n1 / n2;
}

int main() {
  float n1, n2;
  char task;

  cout << "Enter the first number: ";
  cin >> n1;

  cout << "Enter the second number: ";
  cin >> n2;

  cout << "Select an operation (+,-,*,/)"<<endl;
  cout<<"+ Addition  "<<endl;
  cout<<"- Subtraction "<<endl;
  cout<<"* Multiplication "<<endl;
  cout<<"/ Division "<<endl;
  cin >> task;

  float result;

  switch (task) {
    case
 
'+':
      result = add(n1, n2);
      break;
    case
 
'-':
      result = subtract(n1, n2);
      break;
    case

'*':
      result = multiply(n1, n2);

      
break;
    case
 
'/':
      result = divide(n1, n2);
      break;
    default:
      cout << "SYNTAX ERROR" << endl;
      return 1;
  }

  cout << n1 << " " << task << " " << n2 << " = " << result << endl;

return 0;
}

