#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class cat {
public:
    cat(){
        name = "Murzik";
        weight = 10;
        color = "grey";
    }
    cat(string namet, int weightt, string colort) {
        name = namet;
        weight = weightt;
        color = colort;
    }
    string name;
    int weight;
    string color;
    string conv() {
        return "Name: " + name + ", weight: " + to_string(weight) + ", color: " + color;
    }
    
};

void file_wr(string str,string file_name) {
        ofstream ouft;
        ouft.open(file_name+".txt");
        ouft << str;
        ouft.close();
}

int main()
{
    cout << "Count:";
    int n;
    cin >> n;
    vector<cat> v;
    string name, color;
    int weight;
    for (int i = 0; i < n; i++) {
        name = color = "";
        weight = 0;
        cout << "Name:"; 
        cin >> name;
        cout << "weight:";
        cin >> weight;
        cout << "color:";
        cin >> color;
        cat Cat(name,weight,color);
        v.push_back(Cat);
    }
    for (int i = 0; i < n; i++) {
        file_wr(v.at(i).conv(),"test"+to_string(i+1));
    }
}

