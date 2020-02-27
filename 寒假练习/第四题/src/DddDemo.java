class Person {
    private String name;
    private int age;
    private String sex;

    public Person(String name,int age,String sex){
        this.name = name;
        this.age = age;
        this.sex = sex;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public String getName() {
        return this.name;
    }


    public int getAge() {
        return this.age;
    }

    public String getSex() {
        return this.sex;
    }
}




class AgeException extends Exception{
    public AgeException(String age){
        super(age);
    }
}
class SexException extends Exception{
    public SexException(String sex){
        super(sex);
    }
}

public class DddDemo {
    public static void main(String args[]) {
        Person a = new Person("哈哈", 18, "男");
        Person b = new Person("嘿嘿", 1000, "女");
        Person c = new Person("嘻嘻", 19, "仙子");
        try {
            if (a.getAge() > 100) {
                throw new AgeException("要成神仙了");
            } else if (a.getAge() < 0) {
                throw new AgeException("还没出生呢");
            }
            if (a.getSex() != "男" && a.getSex() != "女") {
                throw new SexException("地球上好像不存在");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

        try {
            if (b.getAge() > 100) {
                throw new AgeException("要成神仙了");
            } else if (b.getAge() < 0) {
                throw new AgeException("还没出生呢");
            }
            if (b.getSex() != "男" && b.getSex() != "女") {
                throw new SexException("地球上好像不存在");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            if (c.getAge() > 100) {
                throw new AgeException("要成神仙了");
            } else if (c.getAge() < 0) {
                throw new AgeException("还没出生呢");
            }
            if (c.getSex() != "男" && c.getSex() != "女") {
                throw new SexException("地球上好像不存在");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

    }
}


