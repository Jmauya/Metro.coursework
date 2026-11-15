public class Main {
    public static void main(String[] args) {
        Thread t1 = new Thread(() -> {
            PrinterSpooler spooler = PrinterSpooler.getInstance();
            spooler.addJob("Resume.pdf");
        }, "Thread-1");

        Thread t2 = new Thread(() -> {
            PrinterSpooler spooler = PrinterSpooler.getInstance();
            spooler.addJob("Financial_Report.pdf");
        }, "Thread-2");

        Thread t3 = new Thread(() -> {
            PrinterSpooler spooler = PrinterSpooler.getInstance();
            spooler.addJob("Project_Slides.pptx");
        }, "Thread-3");

        t1.start();
        t2.start();
        t3.start();

        try {
            t1.join();
            t2.join();
            t3.join();

        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
            System.err.println("Main thread interrupted.");
        }

        PrinterSpooler sharedSpooler = PrinterSpooler.getInstance();
        sharedSpooler.printAll();
    }
}
