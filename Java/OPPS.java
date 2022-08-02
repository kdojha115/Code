import javax.tools.Diagnostic;

class Student{
    String name;
    int age;

    // Non-Perimerterized Constructor 

    Student() {
        System.out.println("Constructor called for Student");
    }

    // Perimeterized Constructor

    Student(String name , int age){
        System.out.println("Parameterized Constructor for Student");
        this.name = name;
        this.age = age;
    }

    // Copy Constructor

    Student(Student s){
        this.name = s.name;
        this.age = s.age;
    }

    public void getInfo(){
        System.out.println("The Student name is " + this.name);
        System.out.println("The age of Student is "+ this.age);
    }

    // method - overloading

    public void displayInfo(String name){
        System.out.println(name);
    }

    public void displayInfo(int age){
        System.out.println(age);
    }

    public void displayInfo(String name, int age){
        System.out.println(name);
        System.out.println(age);
    }
}

class Pen{
    String color;

    // Non - Perimetrized Constructor

    Pen(){
        System.out.println("Constructor called for Pen");
    }

    // Perimetrized Constructor

    Pen(String color){
        System.out.println("Perimerterized constructor for Pen");
        this.color = color;
    }

    // Copy - Constructor

    Pen(Pen P)
    {
        this.color = P.color;
    }

    public void printColor(){
        System.out.println("The color of this Pen is "+ this.color);
    }
}

public class OPPS{
    public static void main(String args[]){
        Student s1 = new Student();
        s1.name = "Aman";
        s1.age = 23;
        s1.getInfo();

        Student s2 = new Student();
        s2.name = "Radha";
        s2.age = 24;
        s2.getInfo();

        Student s3 = new Student("Ram",21);
        s3.getInfo();

        Student s4 = new Student(s3);
        s4.getInfo();

        Pen p1 = new Pen();
        p1.color = "blue";

        Pen p2 = new Pen();
        p2.color = "black";

        Pen p3 = new Pen();
        p3.color = "red";

        Pen p4 = new Pen("green");
        p4.printColor();

        Pen p5 = new Pen(p4);
        p5.printColor();

        p1.printColor();
        p2.printColor();
        p3.printColor();

        s1.displayInfo("Akash");
        s1.displayInfo(33);
        s1.displayInfo("Abhishek",40);

    }
}