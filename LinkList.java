public class LinkList {

    Link first;

    LinkList(){
        first = null;
    }

    boolean isEmpty(){return first==null;}

    void insertAtHead(int key){
        Link newLink = new Link(key);
        newLink.setNext(first);
        first = newLink;
    }

    void insertAtEnd(int key){
        Link parent = first;
        Link current = first;
        while(current!=null){
            parent = current;
            current = current.getNext();
        }
        parent.setNext(new Link(key));
    }

    void del(int key){
        Link parent = first;
        Link current = first;
        while(current!=null && current.getData()!=key){
            parent = current;
            current = current.getNext();
        }
        if(current!=null)
            parent.setNext(current.getNext());
        else
            System.out.println("Ошибка удаления. Элемент " + key + " не найден." );
    }

    void deleteAtHead(){
        first = first.getNext();
    }

    void search(int key) {
        Link current = first;

        while (current != null && current.getData() != key)
            current = current.getNext();

        if (current != null)
            System.out.println("Элемент " + key + " найден");
        else
            System.out.println("Элемент " + key + " не найден");


    }

    void display(){
        if(!isEmpty()){
            Link current = first;
            while(current!= null){
                System.out.println(current.getData() + " ");;
                current = current.getNext();
            }
            System.out.println();
        }else System.out.println("Список пуст");
    }

}
