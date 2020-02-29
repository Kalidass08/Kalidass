
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%2==0)
{
    printf("Even");
}
else if (a%2==1)
{
    printf("Odd");
}
else
printf("invalid");
return 0;
}




// Java program to demonstrate working of Comparator 
// interface and Collections.sort() to sort according 
// to user defined criteria. 

import java.util.*; 

import java.lang.*; 

import java.io.*; 

  
// A class to represent a student. 

class Student 
{ 

    int rollno; 

    String name, address; 

  

    // Constructor 

    public Student(int rollno, String name, 

                               String address) 

    { 

        this.rollno = rollno; 

        this.name = name; 

        this.address = address; 

    } 

  

    // Used to print student details in main() 

    public String toString() 

    { 

        return this.rollno + " " + this.name + 

                           " " + this.address; 

    } 
} 

  

class Sortbyroll implements Comparator<Student> 
{ 

    // Used for sorting in ascending order of 

    // roll number 

    public int compare(Student a, Student b) 

    { 

        return a.rollno - b.rollno; 

    } 
} 

  
// Driver class 

class Main 
{ 

    public static void main (String[] args) 

    { 

        ArrayList<Student> ar = new ArrayList<Student>(); 

        ar.add(new Student(111, "bbbb", "london")); 

        ar.add(new Student(131, "aaaa", "nyc")); 

        ar.add(new Student(121, "cccc", "jaipur")); 

  

        System.out.println("Unsorted"); 

        for (int i=0; i<ar.size(); i++) 

            System.out.println(ar.get(i)); 

  

        Collections.sort(ar, new Sortbyroll()); 

  

        System.out.println("\nSorted by rollno"); 

        for (int i=0; i<ar.size(); i++) 

            System.out.println(ar.get(i)); 

    } 
} 
