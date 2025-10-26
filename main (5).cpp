/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
class SuperKahraman {
public:
    string ad;
    int hasar;
    int can;
    void ozelGuc() {
        hasar = 10;
    
    }
    SuperKahraman() {
        hasar = 50;
        can = 100;
    }
};
int main() {
    SuperKahraman spiderMan;
    spiderMan.ad = "SpiderMan";
    
    SuperKahraman batman;
    batman.ad = "Batman";
    
    cout<<"Super kahramanlar kapisiyor"<<endl;
    bool savasBittiMi=true;
    while(savasBittiMi) {
        char karakterSecimi;
        cout<<"Hangi super kahraman saldırsın. s/b"<<endl;
        cin>>karakterSecimi;
        if(karakterSecimi=='s') {
            batman.can-=spiderMan.hasar;
        }
        else if(karakterSecimi=='b') {
            spiderMan.can-=batman.hasar;
        }
        else{
            cout<<"Hatalı giriş yaptınız";
        }
        cout<<"spiderMan kalan can: "<< spiderMan.can <<" Batman kalan can: "<<batman.can<<endl;
        if(spiderMan.can<=0 || batman.can<=0) {
            savasBittiMi=false;
            if(spiderMan.can<0) {
                cout<<"kazanan Batman"<<endl;
            }
            else{
                cout<<"Kazanan SpiderMan"<<endl;
            }
        }
    }
	return 0;
}
