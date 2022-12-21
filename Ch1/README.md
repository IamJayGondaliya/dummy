# Project 1

> This are demo codes.

<u>**Aim**</u> : _WAP to print basic info in C++._

<u>**Program**</u> : 

        #include<iostream>
        using namespace std;
        class Hotel{
            private:
                int id;
                string name;
                static int count;
            public:
                Hotel() {
                    id = count;			
                    cout << "Id: " << id << endl;			
                    count++;
                }		
                ~Hotel() {
                    cout << "Id " << id << " is deleted..." << endl;
                }
        };

        int Hotel::count = 1;

        int main() {
            Hotel h[5];
        }

<u>**Output**</u> :

![Error Text](https://github.com/IamJayGondaliya/dummy/blob/master/Images/P1.PNG)

<img src="https://github.com/IamJayGondaliya/dummy/blob/master/Images/P1.PNG" width="250px">
