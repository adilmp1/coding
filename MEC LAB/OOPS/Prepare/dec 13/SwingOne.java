import javax.swing.*;
public class SwingOne
{
	JFrame jf;
	JTextField jtf;
	SwingOne(){
	jf=new JFrame();
	jtf=new JTextField();
	jtf.setBounds(30,150,100,40);
	JButton jb=new JButton("Click");
	jb.setBounds(30,50,100,40);
	jf.add(jb);
	jf.add(jtf);
	jf.setSize(400,400);
	jf.setLayout(null);
	jf.setVisible(true);
}

public static void main(String a[])
{
	new SwingOne();

}
}