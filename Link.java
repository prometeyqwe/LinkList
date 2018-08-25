class Link{

    private int data;
    private Link next;


    Link(int data){
        this.data = data;
        this.next = null;
    }

    void displayLink(){
        System.out.println("{" + this.data + "}");
    }

    Link getNext(){
        return this.next;
    }

    void setNext(Link link){
        this.next = link;
    }

    int getData(){
        return this.data;
    }

    void setData(int key){
        this.data = key;
    }
}






