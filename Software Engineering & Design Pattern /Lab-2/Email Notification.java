ublic class EmailNotification extends Notification {

    public EmailNotification(String recipient) {
        super(recipient);
    }

    @Override
    public void send(String message) {

        System.out.println("Sending email to " + recipient + ": \"" + message + "\"");

        logNotification(message);
    }
}
