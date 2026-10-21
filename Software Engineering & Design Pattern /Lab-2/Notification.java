public abstract class Notification implements Sendable {

    protected String recipient;

    public Notification(String recipient) {
        this.recipient = recipient;
    }
    public void logNotification(String message) {
        System.out.println( "Notification queued for " + recipient + ": " + message
        );
    }
}
