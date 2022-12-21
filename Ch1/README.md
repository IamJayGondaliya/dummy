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

![Error Text](https://helpx.adobe.com/content/dam/help/en/photoshop/using/convert-color-image-black-white/jcr_content/main-pars/before_and_after/image-before/Landscape-Color.jpg)

<img src="https://helpx.adobe.com/content/dam/help/en/photoshop/using/convert-color-image-black-white/jcr_content/main-pars/before_and_after/image-before/Landscape-Color.jpg" width="250px">