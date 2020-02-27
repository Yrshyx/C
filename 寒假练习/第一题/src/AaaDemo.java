class Person {
    private String name ;
    private int age ;
    private Car car ;
    public Person(String name , int age) {
        this.name = name ;
        this.age = age ;
    }

    public void setCar(Car car) {
        this.car = car;
    }

    public Car getCar() {
        return this.car;
    }
    public String print() {
        return "姓名：" + this.name + ",年龄：" + this.age ;
    }
}
class Car {
    private String pinpai ;
    private double price ;
    private Person person ;
    public Car(String pinpai , double price){
        this.pinpai = pinpai ;
        this.price = price ;
    }

    public void setPinpai(String pinpai) {
        this.pinpai = pinpai;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getPinpai() {
        return pinpai;
    }

    public double getPrice() {
        return price;
    }
    public String print() {
        return "车的品牌" + this.pinpai +"，车的价格："+ this.price;
    }

    public void setPerson(Person person) {
        this.person = person;
    }

    public Person getPerson() {
        return person;
    }
}
public class AaaDemo {
    public static void main(String args[]) {
        Person a = new Person("小李",18) ;
        Car b = new Car("奔驰",100) ;
        a.setCar(b);
        b.setPerson(a);
        System.out.println(b.getPerson().print());
        System.out.println(a.getCar().print());
    }

}