import java.util.ArrayList;

public class ObserverDemo {
    public static void main(String args[]) {

        // luodaan provider- olio EventProvider- luokasta.
        EventProvider provider = new EventProvider();
        
        //Lisätään luokka 
        OmaKuuntelijaLuokka ok = new OmaKuuntelijaLuokka();
        provider.addKuuntelija(ok);
        
        JokuLuokka jes = new JokuLuokka();
        provider.addKuuntelija(jes);

        provider.addKuuntelija(new EventListeners() {

            @Override
            public void lukuPaivitetty(int aLuku) {
                System.out.println("Luku anonyymista paikallisesta luokasta");
            }  
        });

        provider.addKuuntelija(aLuku -> {
            System.out.println("Lambda, joka toteuttaa EventListener -rajapinnan");
        });

        provider.setLuku(2);

    }
}

class JokuLuokka implements EventListeners {

    @Override 
    public void lukuPaivitetty(int aLuku) {
        System.out.println("Jotain tapahtuu kun luku vaihtui.");
    }
}


class OmaKuuntelijaLuokka implements EventListeners {
    public OmaKuuntelijaLuokka() {
        System.out.println("Kuuntelijan luonti");
    }

    @Override
    public void lukuPaivitetty(int aLuku) {
        System.out.println("Luku päivitetty, uusi luku on: " +  aLuku);
        
    }
}

interface EventListeners {
    void lukuPaivitetty( int aLuku );
}


class EventProvider {
    private int mLuku = 0;
    private ArrayList<EventListeners> mListeners = new ArrayList<EventListeners>();
  

    public EventProvider() {
        System.out.println("Event provider rakentaja.");
    }

    // Asetetaan kuuntelija luokalle
    public void addKuuntelija( EventListeners aKuuntelija ) {
        mListeners.add( aKuuntelija );
    }

    public void setLuku ( int aLuku ) {
        if ( mLuku != aLuku ) {
            mLuku = aLuku;
            //Välitetään event kuuntelijaoliolle
            for ( EventListeners e : mListeners ) {
                e.lukuPaivitetty(mLuku);
            }
        }
    }
}
