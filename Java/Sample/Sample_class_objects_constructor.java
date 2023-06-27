package Java.Sample;
import java.util.*;

class Employee
{
    public int id, salary, age;
    public String name, designation;
    Employee(int id, int salary, int age, String name, String designation)
    {
        this.id = id;
        this.salary = salary;
        this.age = age;
        this.name = name;
        this.designation = designation;
    }
    public void printEmployee()
    {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Designation: " + designation);
        System.out.println("Salary: " + salary);
    }
}

public class Sample_class_objects_constructor
{
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int id = sc.nextInt(), salary = sc.nextInt(), age = sc.nextInt();
            String name = sc.next(), desgination = sc.next();
            Employee emp = new Employee(id, salary, age, name, desgination);
            emp.printEmployee();
        }
        //System.out.println("Hello World!");
    }
}
