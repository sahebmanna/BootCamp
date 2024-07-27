/*5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.
*/
#include<iostream>
#include<cstring>
using namespace std;

class Item{
 protected:
    int item_no;
    string name;
    int price;

};
class Discounted_Item : public Item{

public:
    void Acceptdetails(){
        cout<<"Enter Details of Items "<<endl;
        cout<<"------------------------ "<<endl;
        cout<<"Enter Item-no : "<<endl;
        cin>>item_no;
        cout<<"Enter Item name: "<<endl;
        cin>>name;
        cout<<"Enter Item price : "<<endl;
        cin>>price;

    }

    void discount_percent(){
        if(price>=1000){
            price=price-((price/100)*10);
        }

    }
    void show_details(){
        cout<<"\n After discount product actual price :-->"<<endl;
        cout<<"------------------------ "<<endl;
        cout<<" Item-no : "<<item_no<<endl;

        cout<<" Item name: "<<name<<endl;

        cout<<" Item price : "<<price<<endl;


    }

};

int main(){
    Discounted_Item i;
    i.Acceptdetails();
    i.discount_percent();
    i.show_details();
    return 0;

}
