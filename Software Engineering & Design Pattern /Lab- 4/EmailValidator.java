public class EmailValidator {

    public boolean isValidEmail(String email) {
        if (email != null && email.contains("@")) {
            return true;
        }

        System.out.println("Invalid email format.");
        return false;
    }
}
