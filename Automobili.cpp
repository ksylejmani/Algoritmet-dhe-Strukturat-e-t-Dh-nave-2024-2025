#include<iostream>
#include<string>
using namespace std;
enum ngjyra{
    e_kuqe=1, e_zeze, hiri, e_bardhe, e_kalter
};
string strNgjyrat[]={"E kuqe","E zeze","Hiri","E bardhe", "E kalter"};
class Automobili{
    protected:
        string marka, modeli;
        int viti;
        ngjyra ngj;
    public:
        Automobili(){
            cout<<"Cakto marken: ";
            getline(cin,marka);
            cout<<"Cakto modelin: ";
            getline(cin,modeli);
            cout<<"Cakto vitin: ";
            cin>>viti;
            cout<<"Jepe ngjyren (1-e kuqe, 2-e zeze, 3-hiri, 4-e bardhe ose 5-e kalter):";
            int intNgjyra;
            cin>>intNgjyra;
            ngj=static_cast<ngjyra>(intNgjyra);
        }
        Automobili(string ma, string mo, int v, ngjyra n){
            marka=ma;
            modeli=mo;
            viti=v;
            ngj=n;
        }
        void shfaqeTeDhenat(){
            cout<<"Detajet e makines jane:\n";
            cout<<"Marka: "<<marka<<endl;
            cout<<"Modeli: "<<modeli<<endl;
            cout<<"Viti: "<<viti<<endl;
            cout<<"Ngjyra: "<<strNgjyrat[ngj-1]<<endl;
        }
        bool iDoganueshem(){
            bool rez;
            if(2025-viti<=10){
                rez=true;
            }
            else{
                rez=false;
            }
            return rez;
        }
        string llogaritKodin() {
            // Përdorimi i operatorit += siguron që karakteret të ngjiten si varg (string) 
            // dhe jo të mbidhen si vlera te kodit ASCII. 
            // Në këtë mënyrë, funksioni kthen saktësisht katër karaktere.
            string rez;
            rez += marka[0];
            rez += modeli[0];
            rez += marka[marka.length() - 1];
            rez += modeli[modeli.length() - 1];
            return rez;
        }
        
};
class AutomobiliMalor:public Automobili{
    private:
        float gjatesiaEAmortizerit;
    public:
    AutomobiliMalor():Automobili(){
        cout<<"Cakto gjatesine e amortizerit: ";
        cin>>gjatesiaEAmortizerit;
    }
        void shfaqNivelinEAmortizerit(){
            if(gjatesiaEAmortizerit<30){
                cout<<"Niveli i amortizerit eshte i ulte\n";
            }
            else if(gjatesiaEAmortizerit<60){
                cout<<"Niveli i amortizerit eshte i mesem\n";                
            }
            else{
                cout<<"Niveli i amortizerit eshte i larte\n";
            }
        }
};
int main(){
    AutomobiliMalor am;
    am.shfaqeTeDhenat();
    if(am.iDoganueshem()){
        cout<<"Makina e juaj mund te doganohet\n";
    }
    else{
        cout<<"Makina e juaj nuk mund te doganohet me qe eshte me e vjeter se 10 vite\n";
    }
    cout<<"Kodi i automobilit eshte: "<<am.llogaritKodin()<<endl;
    am.shfaqNivelinEAmortizerit();
    return 0;
}