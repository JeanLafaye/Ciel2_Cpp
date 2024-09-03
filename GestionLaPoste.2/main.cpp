#include <emballage.h>
using namespace std;

int main()
{
    /*Emballage colis1("xs",1,270,190);
    colis1.Visualiser();
    Emballage *pColis;
    pColis = new Emballage("xl",7,383,250,195);
    pColis->Visualiser();
    delete pColis;
    */
    Emballage *tabColis[5];
    string format;
    int hauteur,largeur,longueur,resistance;
    for (int i = 0; i < 2; ++i) {
        cout<< "Nom du format:";
        getline(cin,format);
        cout<<"Resistance:";
        cin>>resistance;
        cout<<"Largeur:";
        cin>>largeur;
        cout<<"Longueur:";
        cin>>longueur;
        cout<<"Hauteur:";
        cin>>hauteur;


        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        tabColis[i] = new Emballage(format,resistance,largeur,longueur,hauteur);


    }
    cout<< "+" <<setfill('-')<<setw(14)<< "+"<<setw(11)<<"+"<<setw(17)<<"+"<<endl;
    cout<< "|" <<setfill(' ')<<setw(13)<< left<<"Format"<< "|"<<"Resistance"<<setw(5)<< "| "<<"Dimensions "<<" |"<<endl;
    cout<< right<<"+" <<setfill('-')<<setw(14)<< "+"<<setw(11)<<"+"<<setw(17)<<"+"<<endl;
    for (int var = 0; var < 2; ++var) {
        tabColis[var]->Visualiser();
    }
cout<< "+" <<setfill('-')<<setw(14)<< "+"<<setw(11)<<"+"<<setw(17)<<"+"<<endl;
    if (*tabColis[0] < *tabColis[1]) {
    cout << "TabColis[0] est plus petit que tabColis[1]"<<endl;
    }else{
        cout << "TabColis[1] est plus petit que tabColis[0]"<<endl;
    }
    if(*tabColis[0] == *tabColis[1]){
        cout << "Les deux colis sont identiques" << endl;
    }else{
    cout << "Les deux colis ne sont pas identiques" << endl;
    }

    float volume = *tabColis[1];
    cout<<"Le volume de tabColis1 est :"<<volume<<endl;

    return 0;
}
