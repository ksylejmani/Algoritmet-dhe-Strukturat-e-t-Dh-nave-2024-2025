#include<iostream>
#include<string>
using namespace std;
class personi{
    private:
        string emri;
        int mosha;
        float gjatesia;
    public:
    personi(){
        emri="Filane Fisteku";
        mosha=19;
        gjatesia=1.71;
    }
    void vendosMosha(int m){
        if(m>=0&&m<=130){
            mosha=m;
        }
        else{
            cout<<"Mosha e tille nuk eshte valide!";
        }
    }
    int merreMosha(){
        return mosha;
    }
    bool moshaCift(){
        bool rez=false;
        if(mosha%2==0){
            rez=true;
        }
        return rez;
    }
};
int main(){
    personi p;
    p.vendosMosha(21);
    cout<<"Mosha:"<<p.merreMosha()<<endl;
    cout<<"Mosha eshte numer cift: "<<p.moshaCift()<<endl;
    return 0;
}