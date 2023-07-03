import java.util.Scanner;
class employee
{
    Scanner read = new Scanner(System.in);
    String name;
    String ph;
    String address;
    int age;
    int salary;
    
    void printSalary()
    {
        System.out.print(salary);
    }

    void readEmployee(Officer p)
    {
        System.out.print("Enter Name: ");
        p.name=read.next();
        System.out.print("Enter Age: ");
        p.age=read.nextInt();
        System.out.print("Enter Phone Number: ");
        p.ph=read.next();
        System.out.print("Enter Address: ");
        p.address=read.next();
        System.out.print("Enter Salary: ");
        p.salary=read.nextInt();
        System.out.print("Enter specialisation: ");
        p.specialization=read.next();
        System.out.print("\n\n");
    }
    void readEmployee(Manager p)
    {
        System.out.print("Enter Name: ");
        p.name=read.next();
        System.out.print("Enter Age: ");
        p.age=read.nextInt();
        System.out.print("Enter Phone Number: ");
        p.ph=read.next();
        System.out.print("Enter Address: ");
        p.address=read.next();
        System.out.print("Enter Salary: ");
        p.salary=read.nextInt();
        System.out.print("Enter department: ");
        p.department=read.next();
        System.out.print("\n\n");
    }

    static void printEmployee(Officer p)
    {
        System.out.println("Name: "+p.name);
        System.out.println("Age: "+p.age);
        System.out.println("Ph: "+p.ph);
        System.out.println("Address: "+p.address);
        System.out.println("Salary: "+p.salary);
        System.out.println("Specialisation: "+p.specialization+ "\n\n\n");
    }
    static void printEmployee(Manager p)
    {
        System.out.println("Name: "+p.name);
        System.out.println("Age: "+p.age);
        System.out.println("Ph: "+p.ph);
        System.out.println("Address: "+p.address);
        System.out.println("Salary: "+p.salary);
        System.out.println("department: "+p.department + "\n\n\n");
    }

    public static void main(String args[])
    {
        Officer e1 = new Officer();
        e1.readEmployee(e1);
        Manager e2 = new Manager();
        e2.readEmployee(e2);
        System.out.print("Employees are\n");
        printEmployee(e1);
        printEmployee(e2);
    }

}
class Officer extends employee
{
    String specialization;
}

class Manager extends employee
{
    String department;
}

