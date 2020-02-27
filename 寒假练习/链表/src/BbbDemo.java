class Link {
    private class Node {
        private String data;
        private Node next;

        public Node(String data) {
            this.data = data;
        }

        public void addNode(Node newNode) {
            if (this.next == null) {
                this.next = newNode;
            } else {
                this.next.addNode(newNode);
            }
        }

        public boolean containsNode(String data) {
            if (data.equals(this.data)) {
                return true;
            } else {
                if (this.next != null) {
                    return this.next.containsNode(data);
                } else {
                    return false ;
                }
            }
        }
        public String getNode(int index) {
            if(Link.this.foot ++ == index){
                return this.data ;
            }else {
                return this.next.getNode(index);
            }
        }
        public void setNode(int index,String data){
            if(Link.this.foot++ == index){
                this.data = data ;
            }else {
                this.next.setNode(index,data);
            }
        }
        public void removeNode(Node previous , String data){
            if (data.equals(this.data)) {
                previous.next = this.next ;
            } else {
                this.next.removeNode(this,data);
            }
        }
        public void toArrayNode() {
            Link.this.retArray[Link.this.foot++] = this.data;
            if(this.next != null) {
                this.next.toArrayNode();
            }
        }
    }

    public boolean contains(String data) {
        if (data == null || this.root == null) {
            return false;
        }
        return this.root.containsNode(data);
    }

    private Node root;

    public void add(String data) {
        if (data == null) {
            return;
        }
        Node newNode = new Node(data);
        if (this.root == null) {
            this.root = newNode;
        } else {
            this.root.addNode(newNode);
        }
        this.count++;
    }

    private int count = 0;

    public int size() {
        return this.count;
    }

    private int foot = 0;

    public String get(int index) {
        if (index > this.count) {
            return null;
        }
        this.foot = 0;
        return this.root.getNode(index);
    }
    public void set(int index , String data){
        if(index > this.count) {
            return;
        }
        this.foot = 0;
        this.root.setNode(index,data);
    }
    public void remove(String data) {
        if(this.contains(data)){
            if(data.equals(this.root.data)) {
                this.root = this.root.next ;
            }else {
                this.root.next.removeNode(this.root,data);
            }
            this.count -- ;
        }
    }
    private String [] retArray ;
    public String[] toArray() {
        if(this.root == null) {
            return null ;
        }
        this.foot = 0 ;
        this.retArray = new String[this.count] ;
        this.root.toArrayNode();
        return this.retArray ;
    }
}
public class BbbDemo {
    public static void main(String args[]) {
        Link a = new Link() ;
        System.out.println("链表增加数据：");
        a.add("b");
        a.add("c");
        a.add("d");
        a.add("e");
        a.add("f");
        int s = a.size() ;
        System.out.println("共有数据" + s + "个");
        System.out.println("链表查找数据：");
        System.out.println("查找第二个数据：");
        System.out.println("第二个数据为：" + a.get(1));
        System.out.println("链表删除第一个数据：");
        a.remove("b");
        System.out.println("链表删除原本的第一个数据后输出现在的第一个数据：");
        System.out.println(a.get(0));



    }
}

