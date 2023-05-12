#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

    class Persona {
        private:
            unsigned int id;
            string name;
            string lastname;
            unsigned int birthyear;
            unsigned int gender;
            string workposition;
            unsigned int salary;

        public:
            Persona(unsigned int id, string name, string lastname, unsigned int birthyear, unsigned int gender, string workposition, unsigned int salary) {
                this -> id = id;
                this -> name = name;
                this -> lastname = lastname;
                this -> birthyear = birthyear;
                this -> gender = gender;
                this -> workposition = workposition;
                this -> salary = salary;
            }

            Persona() {
                
            }

            unsigned int getid() {
                return id;
            }
            string getname() {
                return name;
            }
            string getlastname() {
                return lastname;
            }
            unsigned int getbirthyear() {
                return birthyear;
            }
            unsigned int getgender() {
                return gender;
            }
            string getworkposition() {
                return workposition;
            }
            unsigned int getsalary() {
                return salary;
            }

            void print() {
                cout<<"ID "<<id<<endl;
                cout<<"Name "<<name<<endl;
                cout<<"Lastname "<<lastname<<endl;
                cout<<"Birth Year "<<birthyear<<endl;
                cout<<"Gender "<<gender<<endl;
                cout<<"Work Position "<<workposition<<endl;
                cout<<"Salary "<<salary<<endl;
            }
    };
    
    class User {
        private:
            unsigned int n=0;
            Persona* array;

            void sortwithsalary(bool down=false) {
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n-1-i; j++) {
                        if(array[j].getsalary()>array[j+1].getsalary()) {
                            swap(array[j],array[j+1]);
                        }
                    }
                }
    
                if(down) {
                    Persona* newarray=new Persona[n];
                    for(int i=0; i<n; i++) {
                        newarray[n-1-i]=array[i];
                    }
    
                    array=newarray;
                 }
            }
    
            void sortwithgender(bool down=false) {
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n-1-i; j++) {
                        if(array[j].getgender()>array[j+1].getgender()) {
                            swap(array[j],array[j+1]);
                        }
                    }
                }
    
                if(down) {
                    Persona* newarray=new Persona[n];
                    for(int i=0; i<n; i++) {
                        newarray[n-1-i]=array[i];
                    }
    
                    array=newarray;
                 }
            }
    
            void sortwithid(bool down=false) {
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n-1-i; j++) {
                        if(array[j].getid()>array[j+1].getid()) {
                            swap(array[j],array[j+1]);
                        }
                    }
                }
    
                if(down) {
                    Persona* newarray=new Persona[n];
                    for(int i=0; i<n; i++) {
                        newarray[n-1-i]=array[i];
                    }
    
                    array=newarray;
                 }
            }
    
            void sortwithname(bool down=false) {
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n-1-i; j++) {
                        if(array[j].getname()>array[j+1].getname()) {
                            swap(array[j],array[j+1]);
                        }
                    }
                }
    
                if(down) {
                    Persona* newarray=new Persona[n];
                    for(int i=0; i<n; i++) {
                        newarray[n-1-i]=array[i];
                    }
    
                    array=newarray;
                 }
            }
    
            void sortwithlastname(bool down=false) {
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n-1-i; j++) {
                        if(array[j].getlastname()>array[j+1].getlastname()) {
                            swap(array[j],array[j+1]);
                        }
                    }
                }
    
                if(down) {
                    Persona* newarray=new Persona[n];
                    for(int i=0; i<n; i++) {
                        newarray[n-1-i]=array[i];
                    }
    
                    array=newarray;
                 }
            }
    
            void sortwithbirthyear(bool down=false) {
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n-1-i; j++) {
                        if(array[j].getbirthyear()>array[j+1].getbirthyear()) {
                            swap(array[j],array[j+1]);
                        }
                    }
                }
    
                if(down) {
                    Persona* newarray=new Persona[n];
                    for(int i=0; i<n; i++) {
                        newarray[n-1-i]=array[i];
                    }
    
                    array=newarray;
                 }
            }

            void sortwithworkposition(bool down=false) {
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n-1-i; j++) {
                        if(array[j].getworkposition()>array[j+1].getworkposition()) {
                            swap(array[j],array[j+1]);
                        }
                    }
                }
    
                if(down) {
                    Persona* newarray=new Persona[n];
                    for(int i=0; i<n; i++) {
                        newarray[n-1-i]=array[i];
                    }
    
                    array=newarray;
                 }
            }

        public:
            void add(Persona element) {
                Persona* arr=new Persona[n+1];
                for(int i=0; i<n; i++) {
                    arr [i]=array[i];
                }

                arr [n]=element;
                n++;
                array=arr;
            }
    
            void remove(unsigned int index) {
                if(index>=n) {
                    cerr<<"Mistake ";
                    exit(1);
                }
            
                Persona* arr=new Persona[n-1];
                for(int i=0,j=0; i<n; i++) {
                    if(i==index) {
                        continue;
                    }
                    arr[j]=array[i];
                    j++;
                }

                n--;
                array=arr;
            }

            unsigned int length() {
                return n;
            }

            void sort(string str,bool reverse=false) {
                if(str=="id") {
                    sortwithid(reverse);
                }

                else if(str=="name") {
                    sortwithname(reverse); 
                }

                else if(str=="lastname") {
                    sortwithlastname(reverse);
                }

                else if(str=="birthyear") {
                    sortwithbirthyear(reverse);
                }

                else if(str=="gender") {
                    sortwithgender(reverse);
                }

                else if(str=="workposition") {
                    sortwithworkposition(reverse);
                }

                else if(str=="salary") {
                    sortwithsalary(reverse);
                }
            }

            void print() {
                for(int i=0; i<n; i++) {
                    array[i].print();
                }
                
            }

            friend User filterwithgender(User &users, unsigned int gender);
            friend User filterwithsalary(User &users, unsigned int a, unsigned int b); 
    };

            User filterwithgender(User &users, unsigned int gender) {
                User newusers;
                for(int i=0; i<users.length(); i++) {
                    if(users.array[i].getgender()==gender) {
                        newusers.add(users.array[i]);	
                    }
                }

                return newusers;
            }
            
            User filterwithsalary(User&users, unsigned int a, unsigned int b) {
                User newusers;
                for(int i=0; i<users.length(); i++) {
                unsigned int salary=users.array[i].getsalary();
                    if(salary>=a||salary<=b) {
                        newusers.add(users.array[i]);
                    }
                }

                return newusers;
            }

        Persona* add(Persona* array, Persona element, unsigned int&n){
            Persona* arr=new Persona[n+1];
            for(int i=0; i<=n; i++) {
                arr [i]=array[i];
            }

            arr [n]=element;
            n++;
            return arr;
        }
    
        User readfile(string url) {
            ifstream fin(url.c_str());
            User users;
            unsigned int id;
            string name;
            string lastname;
            unsigned int birthyear;
            unsigned int gender;
            string workposition;
            unsigned int salary;

            while(fin>>id>>name>>lastname>>birthyear>>gender>>workposition>>salary) {
                Persona someone(id, name, lastname, birthyear, gender, workposition, salary);
                users.add(someone);
            }

            return users;
    }
    
    int main() {
        User users=readfile("D://file0.txt");
        users.print();
        users.sort("id",true);
        users.print();
        
        return 0;
    }
