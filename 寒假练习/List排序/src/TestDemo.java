import java.util.*;

class Person {
    private String name;
    private int age;
    private float price;

    public Person(String name, int age, float price) {
        this.name = name;
        this.age = age;
        this.price = price;
    }

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public float getPrice() {
        return price;
    }
    public void setPrice(float price) {
        this.price = price;
    }

    public String toString()
    {
        return name+" "+age+" "+price;
    }

}

class PersonComparator implements Comparator<Person>{
    public int compare(Person x, Person y) {
        if(x.getPrice()<y.getPrice())
            return -1;
        else if(x.getPrice()>y.getPrice())
            return 1;
        else
            return 0;
        }
    }


class PersonComparator1 implements Comparator<Person>{
    public int compare(Person x, Person y) {
        if(x.getAge()<y.getAge())
            return -1;
        else if(x.getAge()>y.getAge())
            return 1;
        else
            return 0;
        }
    }




public class TestDemo {
    public static void main(String[] args) {

        Person ArrayList[]={
                new Person("a",20,1000),
                new Person("b",28,1800),
                new Person("c",25,1500),
                new Person("d",32,1780),
                new Person("e",33,2000),
        };
        java.util.Arrays.sort(ArrayList,new PersonComparator());
        System.out.println("按工资排序：");
        for(Person s:ArrayList)
        {
            System.out.println(s);
        }

        java.util.Arrays.sort(ArrayList,new PersonComparator1());
        System.out.println("按年龄排序：");
        for(Person s:ArrayList)
        {
            System.out.println(s);
        }
    }

}

