import java.awt.*;
class MyMenu extends Frame{
    MenuBar menuBar;
    Menu file,edit;
    MenuItem open,save,cut,copy;
    MyMenu(){
    menuBar=new MenuBar();
    file=new Menu("file");
    edit=new Menu("edit");
    open=new MenuItem("open");
    save=new MenuItem("save");
    cut=new MenuItem("cut");
    copy=new MenuItem("copy");
    setMenuBar(menuBar);
    menuBar.add(file);
    menuBar.add(edit);
    file.add(open);
    file.add(save);
    file.add(cut);
    file.add(copy);
    setSize(300,400);
    setVisible(true);
}
public static void main(String aa[])
{
    new MyMenu();
}
}