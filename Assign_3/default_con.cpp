#include <iostream>
using namespace std;
class Account {
   private:
   float bal;
   int acc_no;
   public:
   Account() {
      bal = 1000.00;
      acc_no = 2648;
   }
   void display() {
      cout<<"account_no = "<< acc_no <<endl;
      cout<<"balance = "<< bal <<endl;
   }
};
int main() {
   Account obj;
   obj.display();
   return 0;
}
