import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Kayttoliittyma {

    private JFrame mainWindow = new JFrame("Henkilo app");
    private JFrame dataWindow = new JFrame("Tallennetut tiedot");
    public static JTextField mNimi_f = new JTextField("Nimi", SwingConstants.LEFT);
    public static JTextField mIka_f = new JTextField("Ika", SwingConstants.LEFT);
    public static JTextField mOsoite_f = new JTextField("Osoite", SwingConstants.LEFT);
    public static JTextField mPostinumero_f = new JTextField("Postinumero", SwingConstants.LEFT);
    public static JTextField mKunta_f = new JTextField("Kunta", SwingConstants.LEFT);
    public static JLabel prompt = new JLabel("");

    public static JButton mLisaa = new JButton("Lisää");
    public static JButton mTulosta = new JButton("Tulosta");
    public static JButton mPoista = new JButton("Poista");

    public static JLabel mTulostus_a = new JLabel("");



    public Kayttoliittyma()  {
        
        mainWindow.setSize(400, 400);
        mainWindow.setLayout(new GridLayout(6, 2, 5, 5));

        mLisaa.addActionListener( new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Tietojenhallinta.lisaaHenkilo();
                mainWindow.setVisible(true);
            }
        });

        mTulosta.addActionListener( new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                Tietojenhallinta.tulostaHenkilot();
                
                dataWindow.setSize(400, 200);
                dataWindow.setLayout(new GridLayout(1,1));
                dataWindow.getContentPane().add(mTulostus_a);

                dataWindow.setVisible(true);
                mainWindow.setVisible(true);
            }
        });

        mPoista.addActionListener( new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Tietojenhallinta.poistaHenkilo();
                mainWindow.setVisible(true);
            }
        });
        
        mainWindow.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        }

    public void initComponents() {
        mainWindow.getContentPane().add(mNimi_f);
        mainWindow.getContentPane().add(mIka_f);
        mainWindow.getContentPane().add(mOsoite_f);
        mainWindow.getContentPane().add(mPostinumero_f);
        mainWindow.getContentPane().add(mKunta_f);

        mainWindow.getContentPane().add(mTulosta);
        mainWindow.getContentPane().add(mLisaa);
        mainWindow.getContentPane().add(mPoista);
        mainWindow.getContentPane().add(prompt);

        
        mainWindow.setVisible(true);
    }
}


