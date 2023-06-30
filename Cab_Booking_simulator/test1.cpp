//create a cab booking simulator such as ola or uber using c++ and oops concepts. concepts such as inheritance, polymorphism, encapsulation, abstraction, access specifiers, constructors, destructors, friend functions, operator overloading, virtual functions, templates, exception handling, file handling, etc. should be used. the program should be menu driven and should have the following options:
// 1. book a cab
// 2. show all available cabs
// 3. show all booked cabs
// 4. cancel a booking
// 5. exit
// the program should be able to handle exceptions such as: 
// 1. invalid input
// 2. invalid cab number
// 3. invalid option
// 4. invalid booking id
// 5. invalid cancellation id
// 6. invalid cab type
// 7. invalid cab model
// 8. invalid cab number
// 9. invalid cab fare
// 10. invalid cab driver name
// 11. invalid cab driver number
// 12. invalid cab driver rating
// 13. invalid cab driver experience
// 14. invalid cab driver license number

// class Cab
// {
//     private:
//         char cab_type[20];
//         char cab_model[20];
//         char cab_number[20];
//         float cab_fare;
//         char cab_driver_name[20];
//         char cab_driver_number[20];
//         float cab_driver_rating;
//         int cab_driver_experience;
//         char cab_driver_license_number[20];
//     public:
//         Cab()
//         {
//             strcpy(cab_type, "NULL");
//             strcpy(cab_model, "NULL");
//             strcpy(cab_number, "NULL");
//             cab_fare = 0;
//             strcpy(cab_driver_name, "NULL");
//             strcpy(cab_driver_number, "NULL");
//             cab_driver_rating = 0;
//             cab_driver_experience = 0;
//             strcpy(cab_driver_license_number, "NULL");
//         }
//         Cab(char cab_type[], char cab_model[], char cab_number[], float cab_fare, char cab_driver_name[], char cab_driver_number[], float cab_driver_rating, int cab_driver_experience, char cab_driver_license_number[])
//         {
//             strcpy(this->cab_type, cab_type);
//             strcpy(this->cab_model, cab_model);
//             strcpy(this->cab_number, cab_number);
//             this->cab_fare = cab_fare;
//             strcpy(this->cab_driver_name, cab_driver_name);
//             strcpy(this->cab_driver_number, cab_driver_number);
//             this->cab_driver_rating = cab_driver_rating;
//             this->cab_driver_experience = cab_driver_experience;
//             strcpy(this->cab_driver_license_number, cab_driver_license_number);
//         }
//         void display()
//         {
//             cout<<"Cab Type: "<<cab_type<<endl;
//             cout<<"Cab Model: "<<cab_model<<endl;
//             cout<<"Cab Number: "<<cab_number<<endl;
//             cout<<"Cab Fare: "<<cab_fare<<endl;
//             cout<<"Cab Driver Name: "<<cab_driver_name<<endl;
//             cout<<"Cab Driver Number: "<<cab_driver_number<<endl;
//             cout<<"Cab Driver Rating: "<<cab_driver_rating<<endl;
//             cout<<"Cab Driver Experience: "<<cab_driver_experience<<endl;
//             cout<<"Cab Driver License Number: "<<cab_driver_license_number<<endl;
//         }
//         void set_cab_type(char cab_type[])
//         {
//             strcpy(this->cab_type, cab_type);
//         }
//         void set_cab_model(char cab_model[])
//         {
//             strcpy(this->cab_model, cab_model);
//         }
//         void set_cab_number(char cab_number[])
//         {
//             strcpy(this->cab_number, cab_number);
//         }
//         void set_cab_fare(float cab_fare)
//         {
//             this->cab_fare = cab_fare;
//         }
//         void set_cab_driver_name(char cab_driver_name[])
//         {
//             strcpy(this->cab_driver_name, cab_driver_name);
//         }
//         void set_cab_driver_number(char cab_driver_number[])
//         {
//             strcpy(this->cab_driver_number, cab_driver_number);
//         }
//         void set_cab_driver_rating(float cab_driver_rating)
//         {
//             this->cab_driver_rating = cab_driver_rating;
//         }
//         void set_cab_driver_experience(int cab_driver_experience)
//         {
//             this->cab_driver_experience = cab_driver_experience;
//         }
//         void set_cab_driver_license_number(char cab_driver_license_number[])
//         {
//             strcpy(this->cab_driver_license_number, cab_driver_license_number);
//         }
//         char* get_cab_type()
//         {
//             return cab_type;
//         }
//         char* get_cab_model()
//         {
//             return cab_model;
//         }
//         char* get_cab_number()
//         {
//             return cab_number;
//         }

