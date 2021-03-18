#include <bits/stdc++.h>

using namespace std;


class Vehicle{
    public:
        string model_no;
        string engine_type;
        float engine_power;
        float tire_size;

        void set_model_no(string model_no_){
            model_no=model_no_;
        }
        void set_engine_type(string engine_type_){
            engine_type = engine_type_;
        }
        void set_engine_power(float engine_power_){
            engine_power = engine_power_;
        }
        void set_tire_size(float tire_size_){
            tire_size = tire_size_;
        }

        string get_model_no(){
            return model_no;
        }
        string get_engine_type(){
            return engine_type;
        }
        float get_engine_power(){
            return engine_power;
        }
        float get_tire_size(){
            return tire_size;
        }
};

class Normal_vehicle : public Vehicle{

};

class Sports_vehicle : public Vehicle{
    public:
        float turbo;
        Sports_vehicle(){
            set_engine_type("Oil");
        }
        void set_turbo(float turbo_){
            turbo=turbo_;
        }
};

class Heavy_vehicle : public Vehicle{
    public:
        float weight;
        Heavy_vehicle(){
            set_engine_type("Diesel");
        }
        void set_weight(float weight_)
        {
            weight=weight_;
        }
};


vector <Normal_vehicle> normal_vehicle;
vector <Sports_vehicle> sports_vehicle;
vector <Heavy_vehicle> heavy_vehicle;

void add_normal_vehicle(){
    system("CLS");
    string model,engine_type;
    int type;
    float power, tire;
    cout<<"Model number:";   cin>>model;
    cout<<"Engine type: 1. oil 2. Gas 3. Diesel: ";    cin>> type;
    cout<<"Engine power:";    cin>> power;
    cout<<"Tire size:";    cin>> tire;
    if(type==1) engine_type="Oil";
    else if(type==2) engine_type="Gas";
    else if(type==3) engine_type="Diesel";

    Normal_vehicle temp;
    temp.set_model_no(model);
    temp.set_engine_type(engine_type);
    temp.set_engine_power(power);
    temp.set_tire_size(tire);
    normal_vehicle.push_back(temp);
}

void add_sports_vehicle(){
    system("CLS");
    string model;
    float power, tire, turbo;
    cout<<"Model number:";   cin>>model;
    cout<<"Engine power:";    cin>> power;
    cout<<"Tire size:";    cin>> tire;
    cout<<"turbo:";     cin>>turbo;

    Sports_vehicle temp;
    temp.set_model_no(model);
    temp.set_engine_power(power);
    temp.set_tire_size(tire);
    temp.set_turbo(turbo);
    sports_vehicle.push_back(temp);
}

void add_heavy_vehicle(){
    system("CLS");
    string model;
    float power, tire, weight;
    cout<<"Model number:";   cin>>model;
    cout<<"Engine power:";    cin>> power;
    cout<<"Tire size:";    cin>> tire;
    cout<<"weight:";     cin>>weight;

    Heavy_vehicle temp;
    temp.set_model_no(model);
    temp.set_engine_power(power);
    temp.set_tire_size(tire);
    temp.set_weight(weight);
    heavy_vehicle.push_back(temp);
}
void add_car()
{
    system("CLS");
    int choice=100;
    cout<<"Please enter the number for what type of vehicle you want to add: \n1. Normal Vehicle\n2. Sports Vehicle\n3. Heavy Vehicle\n0. Exit\n";
    cin>>choice;
    if(choice == 1) add_normal_vehicle();
    else if (choice==2) add_sports_vehicle();
    else if (choice==3) add_heavy_vehicle();
    else if (choice==0) ;
}
void show_all_cars(){
    system("CLS");
    cout<<"Normal Vehicles:\n";
    if(!normal_vehicle.empty())
    {
        for(int i=0;i<normal_vehicle.size();i++){
            cout<<"model no:"<<normal_vehicle[i].model_no<<"\n";
            cout<<"engine type:"<<normal_vehicle[i].engine_type<<"\n";
            cout<<"engine power:"<<normal_vehicle[i].engine_power<<"\n";
            cout<<"tire size:"<<normal_vehicle[i].tire_size<<"\n";
            cout<<"\n";
        }
    }

    cout<<"Sports Vehicles:\n";
    if(!sports_vehicle.empty())
    {
        for(int i=0;i<sports_vehicle.size();i++){
            cout<<"model no:"<<sports_vehicle[i].model_no<<"\n";
            cout<<"engine type:"<<sports_vehicle[i].engine_type<<"\n";
            cout<<"engine power:"<<sports_vehicle[i].engine_power<<"\n";
            cout<<"tire size:"<<sports_vehicle[i].tire_size<<"\n";
            cout<<"turbo:"<<sports_vehicle[i].turbo<<"\n";
            cout<<"\n";
        }
    }
    cout<<"heavy Vehicles:\n";
    if(!heavy_vehicle.empty())
    {
        for(int i=0;i<heavy_vehicle.size();i++){
            cout<<"model no:"<<heavy_vehicle[i].model_no<<"\n";
            cout<<"engine type:"<<heavy_vehicle[i].engine_type<<"\n";
            cout<<"engine power:"<<heavy_vehicle[i].engine_power<<"\n";
            cout<<"tire size:"<<heavy_vehicle[i].tire_size<<"\n";
            cout<<"weight:"<<heavy_vehicle[i].weight<<"\n";
            cout<<"\n";
        }
    }
    int pause;
    cout<<"press 0 to continue\n";
    cin>>pause;

}


void delete_car(){
    string model_number;
    cout<<"insert model number to delete a car: ";
    cin>>model_number;
    for(int i=0;i<normal_vehicle.size();i++){
        if(normal_vehicle[i].model_no==model_number)
        {
            normal_vehicle.erase(normal_vehicle.begin() + 1);
        }
    }
    for(int i=0;i<heavy_vehicle.size();i++){
        if(heavy_vehicle[i].model_no==model_number)
        {
            heavy_vehicle.erase(heavy_vehicle.begin() + 1);
        }
    }
    for(int i=0;i<sports_vehicle.size();i++){
        if(sports_vehicle[i].model_no==model_number)
        {
            sports_vehicle.erase(sports_vehicle.begin() + 1);
        }
    }

}
void show_visitor(){
    cout<<"Expected visitor count at present: "<<30+(sports_vehicle.size()*20)<<"\n";
    int pause;
    cout<<"press 0 to continue\n";
    cin>>pause;
}

int main()
{
    int choice=100;

    while(1){
        system("CLS");
        cout<<"please provide your choice: \n1. Add vehicle\n2. Remove vehicle\n3. Show vehicle lists\n4. Expected visitor count\n0. Exit\n";
        cin>>choice;
        if(choice==1){
            add_car();
        }
        else if (choice==2){
            delete_car();
        }
        else if (choice==3){
           show_all_cars();
       }
       else if (choice==4){
           show_visitor();
       }
        else if (choice==0){
           exit (1);
       }
    }
}
