interface Fruit {
    public void eat() ;
}
class Cherry implements Fruit {
    public void eat() {
        System.out.println("我正在吃樱桃！");
    }
}
class Strawberry implements Fruit {
    public void eat() {
        System.out.println("我正在吃草莓！");
    }
}
class Apple implements Fruit {
    public void eat() {
        System.out.println("我正在吃苹果！");
    }
}
class FruitFactory {
    public static Fruit getInfo(String shuiguo) {
        if ("Cherry".equals(shuiguo)){
            return new Cherry();
        }
        if ("Strawberry".equals(shuiguo)){
            return new Strawberry();
        }
        if (shuiguo.equals("Apple")){
            return new Apple();
        }else {
            return null;
        }
    }
}
public class CccDemo {
    public static void main(String args[]) {
        Fruit a = FruitFactory.getInfo("Strawberry");
        Fruit b = FruitFactory.getInfo("Apple") ;
        Fruit c = FruitFactory.getInfo("Cherry") ;
        Fruit d = FruitFactory.getInfo("banana") ;
        a.eat();
        b.eat();
        c.eat();
        d.eat();
    }
}