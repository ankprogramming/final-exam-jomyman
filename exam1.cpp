#include <iostream>
using namespace std;

int main() {
     cout << "welcome to CLI Calculator V1.00" << endl;
    int Number1, Number2,cmd;
char e;

// ใส่ตัวเลข
cout << "Enter first number : ";
cin >> Number1;
cout << "Enter second number : ";
cin >> Number2;
//แสดงตัวเลือก
cout << "1.+" << endl;
cout << "2.-" << endl;
cout << "3.*" << endl;
cout << "4./" << endl;
cout << "5.quit" << endl;
do{
("%c",&e);
    cin >> cmd ;
if (cmd == 1){
cout << endl;
cout << "1." << Number1 << " + " << Number2;
cout << " Result = " << Number1 + Number2 << endl;
}else if (cmd == 2){
cout << endl;
cout << "2." << Number1 << " - " << Number2;
cout << " Result = " << Number1 - Number2 << endl;
}else if (cmd == 3){
cout << endl;
cout << "3." << Number1 << " * " << Number2;
cout << " Result = " << Number1 * Number2 << endl;
}else if (cmd == 4){
cout << endl;
cout << "4." << Number1 << " / " << Number2;
cout << " Result = " << Number1 / Number2 << endl;
}else {break;} }
while(e!='q');
cout<<"\n###END Pocess###\t"<<endl;

return 0;
}
