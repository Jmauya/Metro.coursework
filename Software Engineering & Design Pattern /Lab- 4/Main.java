public class Main {

    public static void main(String[] args) {

        User user = new User("Mauya", "jmauya@example.com");

        EmailValidator validator = new EmailValidator();
        UserRepository repository = new UserRepository();

        if (validator.isValidEmail(user.getEmail())) {
            repository.saveToDatabase(user);
        }
    }
}
