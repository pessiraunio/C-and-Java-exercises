import java.awt.Font;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;


public class CounterApp {

    //tähä static arraylist
    static int counter = 0;
    public static void main(String args[]) {


        JFrame mainWindow = new JFrame("Counter app");
        mainWindow.setSize(400, 400);

        mainWindow.setLayout(new GridLayout(10, 1));


        JLabel counterLabel = new JLabel("" + counter, SwingConstants.CENTER);
        counterLabel.setFont(new Font("Arial", Font.BOLD, 25));
        mainWindow.getContentPane().add(counterLabel);

        JButton incrementButton = new JButton("Increment");
        JButton decrementButton = new JButton("Decrement");

        mainWindow.getContentPane().add(counterLabel);
        mainWindow.getContentPane().add(incrementButton);
        mainWindow.getContentPane().add(decrementButton);


        //Lisätään tapahtumankäsittelijä
        incrementButton.addActionListener( new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                counter++;
                counterLabel.setText(""+counter);
            }
        });

        decrementButton.addActionListener( new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                counter--;
                counterLabel.setText(""+counter);
            }
        });

        mainWindow.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        mainWindow.setVisible(true);

    }
}
