public class PushNotification extends Notification {

    public PushNotification(String recipient) {
        super(recipient);
    }

    @Override
    public void send(String message) {

        System.out.println( "Sending push notification to "
                        + recipient + ": \"" + message + "\""
        );
        logNotification(message);
    }
}
