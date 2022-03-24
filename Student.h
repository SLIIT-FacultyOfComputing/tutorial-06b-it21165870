class Student {
  // private section
    private:
  // int stdentId
      int studentId;
  // name <-20 characters
      char name[20];
  
  // public section
    public:
  // assignDetails() method declaration
      void assignDetails(int id,const char n[]);
  // display() method declaration
      void display();
};
