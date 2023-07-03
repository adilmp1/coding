public class Double {
    class Node {
        int data;
        Node next;
        Node prev = null;

        Node(int data){
            this.data = data;
        }
    }

    Node head = null, tail = null;

    public void insert (int data){
        Node n = new Node(data);
        if (head == null){
                head = n;
            
        }
        else{
            tail.next = n;
            n.prev = tail;
        }
            
        tail= n;    
    }

    public void insertAtHead(int data){
        Node n = new Node(data);
        n.next = head;
        head.prev = n;
        head = n;
    }

    public void insertInb(int data, int ele){
        Node n = new Node(data);
        Node temp = head;
        while(temp.next!=null){
            if (temp.data == ele){
                n.prev = temp;
                n.next = temp.next;
                temp.next.prev = n;
                temp.next = n;
                return;
            }

            temp = temp.next;
        }
    }

    public void removeAtEnd (){
        tail = tail.prev;
        tail.next = null;
    }

    public void removeHead(){
        head = head.next;
        head.prev = null;
    }

    public void removeVal(int data){
        Node temp = head;

        while(temp.next !=null){
            if(temp.data == data){
                temp.next.prev = temp.prev;
                temp.prev.next = temp.next;
            }
            temp = temp.next;
        }
    }

    public void disHead(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }

        System.out.println();
    }

    public void distail(){
        Node temp = tail;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.prev;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        Double d = new Double();

        d.insert(1);
        d.insert(2);
        d.insert(3);
        d.insert(4);
        d.insert(5);
        d.disHead();
        d.insertAtHead(-1);
        d.disHead();
        d.removeAtEnd();
        d.disHead();
        d.removeHead();
        d.disHead();
        d.removeVal(3);
        d.disHead();
        d.insertInb(3,2);
        d.disHead();
        d.distail();
    }

}
