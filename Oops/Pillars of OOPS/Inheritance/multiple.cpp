    #include<bits/stdc++.h>
    using namespace std;

    // Multiple Inheritance -> In multiple inheritance,a class can inherit more than 01 clas that means derived class can have more than 01 base class
    class A{
        protected:
            int a;
        public:
            void get_a(int n){
                a=n;
            }
    };

    class B{
        protected:
            int b;
        public:
            void get_b(int n){
                b=n;
            }
    };

    class C: public A, public B {
        public:
            void display(){
                cout << "The value of a is: " << a << endl;
                cout << "The value of b is: " << b << endl;
                cout << "Addition of a and b is: " << a+b << endl;    
            }
    };


    // BASE CLASS
    class Father{
        public:
            void same(){
                cout << "Same skin color" << endl;
                cout << "Same height" << endl;
            }
    };
    // BASE CLASS
    class Mother{
        public:
            void same(){
                cout << "Same voice" << endl;
                cout << "Same eyes" << endl;
                cout << "Same face" << endl; 
            }
    };
    // BASE CLASS
    class Grandparents{
        public:
            void same(){
                cout << "Same thinking" << endl;
            }
    };
    // Derived class
    class child: public Father, public Mother, public Grandparents{
        public:
            void veiw(){
                Father::same();
                Mother::same();
                Grandparents::same();
            }

            void same() {
                cout << "This is the child" << endl;
            }

        //individually ' same(); ' can't be able to excuted because each base class have same body func, which is void same();{} 
        
        // Even    Father::same(); too but can access by object
                // Mother::same();
                // Grandparents::same();
    };

    int main(){

        C c;
        c.get_a(10);
        c.get_b(20);
        c.display();

        child Mohan;
        Mohan.veiw();
                
        Mohan.Father::same();
        Mohan.Mother::same();
        Mohan.Grandparents::same();
        Mohan.same();
        
        return 0;
    }