import java.util.Comparator;
import java.util.PriorityQueue;

class EspejoclassColadePrioridad {

    String description;
    private int prioridad;
    private long timestamp;

    // Constructor
    public EspejoclassColadePrioridad(String description, int prioridad, long timestamp) {
        this.description = description; // llamando a la primera variable, para proteger la clase
        this.prioridad = prioridad;
        this.timestamp = timestamp;
    }

    public String getDescription() {
        return description;
    }

    public int getPrioridad() {
        return prioridad;
    }

    public long getTimestamp() {
        return timestamp;
    }

    // toString method
    @Override
    public String toString() {
        return "EspejoclassColadePrioridad{" +
                "description='" + description + '\'' +
                ", prioridad=" + prioridad +
                ", timestamp=" + timestamp +
                '}';
    }
}

class ComparatorEspejoclassColdePrioridad implements Comparator<EspejoclassColadePrioridad> {
    @Override
    public int compare(EspejoclassColadePrioridad t1, EspejoclassColadePrioridad t2) {
        if (t1.getPrioridad() != t2.getPrioridad()) {
            return Integer.compare(t2.getPrioridad(), t1.getPrioridad());
        } else {
            return Long.compare(t1.getTimestamp(), t2.getTimestamp());
        }
    }
}

public class Main {
    public static void main(String[] args) {
        PriorityQueue<EspejoclassColadePrioridad> queueTareas = new PriorityQueue<>(new ComparatorEspejoclassColdePrioridad());

        queueTareas.add(new EspejoclassColadePrioridad("Lavar plats", 2, System.currentTimeMillis()));
        queueTareas.add(new EspejoclassColadePrioridad("Sustentar", 3, System.currentTimeMillis()));
        queueTareas.add(new EspejoclassColadePrioridad("Hacer compras", 1, System.currentTimeMillis()));
        queueTareas.add(new EspejoclassColadePrioridad("Pasear perro", 1, System.currentTimeMillis()));

        while (!queueTareas.isEmpty()) {
            System.out.println(queueTareas.poll());
        }
    }
}
/*
"colas de prioridad: condiciones para que un dato, "priority que

 */