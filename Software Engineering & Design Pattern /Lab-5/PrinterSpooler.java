import java.util.ArrayList;
import java.util.List;

class PrinterSpooler {
    private static volatile PrinterSpooler instance;
    private List<String> jobQueue;

    private PrinterSpooler() {
        System.out.println("Print spooler initialized.");
        this.jobQueue = new ArrayList<>();
    }

    public static PrinterSpooler getInstance() {
        if (instance == null) {
            synchronized (PrinterSpooler.class) {
                if (instance == null) {
                    instance = new PrinterSpooler();
                }
            }
        }
        return instance;
    }

    public synchronized void addJob(String documentName) {
        jobQueue.add(documentName);
        System.out.println("Queued: " + documentName + " (queue size: " + jobQueue.size() + ")");
    }

    public synchronized void printAll() {
        System.out.println("\nStarting Print Job Execution");
        for (String doc : jobQueue) {
            System.out.println("Printing: " + doc);
        }
        jobQueue.clear();
        System.out.println("Queue cleared.\n");
    }
}
