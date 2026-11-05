public class UserRepository {

    public void saveToDatabase(User user) {
        System.out.println("Connecting to database...");
        System.out.println("Saving user " 
            + user.getUsername() 
            + " to the users table.");
    }
}
