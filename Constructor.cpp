class Student{

    public:
     int age;
     int roll;
    //Default Constructorg
    //  Student(){
    //     cout << "Default Constructor Called" << endl;
        
    //  }
     Student( int roll ){
        this -> roll = roll;
        cout << "Parametrized  Constructor Called" << endl;
        cout << "Value of this : " << this << endl;
        
     }



};