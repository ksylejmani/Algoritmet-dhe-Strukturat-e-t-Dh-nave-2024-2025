#include<iostream>
#include<string>
using namespace std;
class Shkolla{
    protected:
        string emri;
        int NrNxeneseve, NrKlasave;
    public:
        Shkolla(){
            cout<<"Si quhet shkolla? ";
            getline(cin,emri);
            cout<<"Sa nxenes/e ka shkolla? ";
            cin>>NrNxeneseve;
            cout<<"Sa klasa ka shkolla? ";
            cin>>NrKlasave;
        }
        Shkolla(string _emri, int _NrNxeneseve, int _NrKlasave){
            emri=_emri;
            NrNxeneseve=_NrNxeneseve;
            NrKlasave=_NrKlasave;
        }
        string getEmri(){
            return emri;
        }
        void setNrNxeneseve(int _NrNxeneseve){
            NrNxeneseve=_NrNxeneseve;
        }
        int getNumriNxenesve(){
            return NrNxeneseve;
        }
        int llogaritNxenesPerKlase(){
            int rez=NrNxeneseve/NrKlasave+1;
            return rez;
        }
        void tregoMadhesineEShkolles(){
            if(NrNxeneseve>300 || NrKlasave>20){
                cout<<"Shkolla e madhe."<<endl;
            }
            else if(NrNxeneseve>200 || NrKlasave>15){
                cout<<"Shkolle e mesme."<<endl;
            }
            else{
                cout<<"Shkolle e vogel."<<endl;
            }
        }

};
class ShkollaProfesionale:public Shkolla{
    private:
        int NrDrejtimeve;
    public:
        ShkollaProfesionale():Shkolla(){
            cout<<"Sa eshte numri i drjetimeve? ";
            cin>>NrDrejtimeve;
        }
        void shtypCiftTek(){
            if(NrDrejtimeve%2==0){
                cout<<"Ne shkollen "<<emri<<" numri i drejtimeve eshte cift\n"<<endl;
            }
            else{
                cout<<"Ne shkollen "<<emri<<" numri i drejtimeve eshte tek\n"<<endl;
            }
        }
};
int main(){
    // Shkolla xhd;
    // Shkolla sk("Sejdi Kryeziu",300,16);
    // cout<<"Numri i nxenesve per klase ne shkollen "
    //     <<xhd.getEmri()<< " eshte "<<xhd.llogaritNxenesPerKlase()<<endl; 
    // cout<<"Numri i nxenesve per klase ne shkollen "
    //     <<sk.getEmri()<< " eshte "<<sk.llogaritNxenesPerKlase()<<endl; 
    // xhd.tregoMadhesineEShkolles();
    // sk.tregoMadhesineEShkolles();

    ShkollaProfesionale shf;
    shf.tregoMadhesineEShkolles();
    shf.shtypCiftTek();
    return 0;
}