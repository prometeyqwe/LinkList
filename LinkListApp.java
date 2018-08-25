public class LinkListApp {
    public static void main(String[] args){

        LinkList linkList = new LinkList();

        linkList.insertAtHead(3);
        linkList.insertAtHead(2);
        linkList.insertAtHead(1);

        linkList.insertAtEnd(4);
        linkList.insertAtEnd(5);

        linkList.display();

        linkList.deleteAtHead();
        linkList.del(4);
        linkList.del(4);

        linkList.search(2);
        linkList.search(5);
        linkList.search(4);
        System.out.println();
        linkList.display();
    }

}
