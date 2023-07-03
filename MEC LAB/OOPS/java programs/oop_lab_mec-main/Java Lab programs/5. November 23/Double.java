import java.util.Scanner;
class Double
{
    class Node
    {
        int data;
        Node next=null;
        Node prev=null;
        Node(int data)
        {
            this.data=data;
        }
    }
    Node head=null;
    public void addElement(int data)
    {
        Node n = new Node(data);
        if(head==null)
        {
            head=n;
        }
        else
        {
            Node temp = head;
            while(temp.next!=null)
            {   
                temp=temp.next;
            }
            temp.next=n;
            n.prev=temp;
        }
        System.out.println(data+" added successfully");
    }
    public void addAtFront(int data)
    {
        Node n = new Node(data);
        if(head==null)
        {
            head=n;
            System.out.println(data+" added successfully");
        }
        else
        {
            n.next = head;
            head.prev = n;
            head=n;
            System.out.println(data+" added successfully");
        }
    }
    public void addAtPos(int pos,int data)
    {
        Node temp = head;
        if(temp==null)
        {
            addElement(data);
            System.out.println("List was empty element added to first");
            return;
        }
        int count=1;
        while(temp.next!=null)
        {
            temp=temp.next;
            count++;
        }
        if(pos<1)
        {
            System.out.print("Error, position less than 0");
            return;
        }
        if(pos>count)
        {
            if(pos==count+1)
            {
                addElement(data);
                return;
            }
            System.out.print("Error, position greater than number of elements");
            return;
        }
        Node n = new Node(data);
        if(pos==1)
        {
            addAtFront(data);
            return;
        }
        int i=1;
        while(i<=pos-1 && temp.next!=null)
        {
            temp=temp.next;
            i++;
        }
        n.next=temp;
        n.prev=temp.prev;
        temp.prev.next=n;
        temp.prev=n;
        System.out.println(data+" added successfully");
    }
    public void display()
    {
        if(head==null)
        {
            System.out.println("List is Empty");
            return;
        }
        Node temp = head;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println("");
    }
    public void displayReverse()
    {
        if(head==null)
        {
            System.out.println("List is Empty");
            return;
        }
        Node temp = head;
        while(temp.next!=null)
        {
            temp=temp.next;
        }
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.prev;
        }
        System.out.println("");
    }
    public void deletePos(int pos)
    {
        Node temp = head;
        if(temp==null)
        {
            System.out.println("List is Empty");
            return;
        }
        int count=1;
        while(temp.next!=null)
        {
            temp=temp.next;
            count++;
        }
        if(pos>count)
        {
            System.out.print("Error, position greater than number of elements");
            return;
        }
        temp=head;
        if(pos==1)
        {
            temp=temp.next;
            head=temp;
            System.out.println("deleted successfully");
            return;
        }
        int i=1;
        temp = head;
        while(i<=pos-1 && temp.next!=null)
        {
            temp=temp.next;
            i++;
        }
        if(temp.next==null)
        {
            temp.prev.next=null;
            System.out.println("deleted successfully");
            return;
        }
        temp.prev.next=temp.next;
        temp.next.prev=temp.prev;
        System.out.println("deleted successfully");
    }
    public static void main(String[] args) 
    {
        int op,item,pos;
        Scanner read = new Scanner(System.in);
        Double dll = new Double();
        do 
        {
            System.out.println("1. Add Element");
            System.out.println("2. Add Element at front");
            System.out.println("3. Display Elements");
            System.out.println("4. Display Elements in reverse");
            System.out.println("5. Delete element at a position");
            System.out.println("6. Add element at a position");
            System.out.println("Exit - Any Other Key");
            System.out.print("Enter the operation to be done: ");
            op=read.nextInt();
            switch(op)
            {
                case 1:
                    System.out.print("Enter the element: ");
                    item=read.nextInt();
                    dll.addElement(item);
                    break;
                case 2:
                    System.out.print("Enter the element: ");
                    item=read.nextInt();
                    dll.addAtFront(item);
                    break;
                case 3:
                    dll.display();
                    break;
                case 4:
                    dll.displayReverse();
                    break;
                case 5:
                    System.out.print("Enter position: ");
                    item = read.nextInt();
                    dll.deletePos(item);
                    break;
                case 6:
                    System.out.print("Enter position: ");
                    pos = read.nextInt();
                    System.out.print("Enter element: ");
                    item = read.nextInt();
                    dll.addAtPos(pos,item);
                    break;
                default:System.exit(0);
                }
            System.out.println("");
            System.out.println("");
        }while(op<=6);
    }
}