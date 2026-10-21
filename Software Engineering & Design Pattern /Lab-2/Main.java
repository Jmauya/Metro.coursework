public class Main {

    public static void main(String[] args) {

        Sendable[] outbox = {

                new EmailNotification(
                        "rafi@example.com"
                ),
                new PushNotification(
                        "Device-102"
                )
        };

        for (Sendable notification : outbox) {

            notification.send(
                    "Your order has shipped!"
            );
        }
    }
}
