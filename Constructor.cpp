class Student{

    public:
     int age;
     int roll;
    //Default Constructorg
     Student(){
        cout << "Default Constructor Called" << endl;
        
     }
     Student( int r){
        roll = r;
        cout << "Parametrized  Constructor Called" << endl;
        
     }



};