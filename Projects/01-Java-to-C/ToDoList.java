import java.util.Scanner;

// Define maximum number of tasks and the maximum length of each task description.
class ToDoList {
    private static final int MAX_TASKS = 10;
    private static final int MAX_TASK_LENGTH = 256;

    private String[] tasks;
    private int count;

    public ToDoList() {
        tasks = new String[MAX_TASKS];
        count = 0;
    }

    // Function to add a task to the To-Do List.
    public void addTask(String task) {
        // Check if the list is full before adding a new task.
        if (count < MAX_TASKS) {
            // Copy the task description into the new task string.
            tasks[count] = task;
            // Increment the count of tasks in the list.
            count++;
        } else {
            // Notify the user that the list is full.
            System.out.println("Task list is full.");
        }
    }

    // Function to remove a task from the To-Do List.
    public void removeTask(int index) {
        // Validate the task number (index) before attempting to remove.
        if (index < 0 || index >= count) {
            System.out.println("Invalid task number.");
            return;
        }

        // Shift subsequent tasks down to fill the gap left by the removed task.
        for (int i = index; i < count - 1; i++) {
            tasks[i] = tasks[i + 1];
        }

        // Decrement the count of tasks since one has been removed.
        count--;
        // Set the last element to null.
        tasks[count] = null;
    }

    // Function to print all tasks in the To-Do List.
    public void printTasks() {
        System.out.println("To-Do List:");
        for (int i = 0; i < count; i++) {
            System.out.println((i + 1) + ". " + tasks[i]);
        }
    }

    // The main function to run the To-Do List program.
    public static void main(String[] args) {
        // Initialize the To-Do List.
        ToDoList list = new ToDoList();

        Scanner scanner = new Scanner(System.in);
        String task;
        int choice, taskNumber;

        // Continuously display the menu and prompt the user until they choose to exit.
        do {
            // Display the menu options to the user.
            System.out.println("\n1. Add Task");
            System.out.println("2. View Tasks");
            System.out.println("3. Remove Task");
            System.out.println("0. Exit");
            System.out.print("Enter your choice: ");
            // Read the user's choice from standard input.
            choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character.

            // Execute an action based on the user's menu choice.
            switch (choice) {
                case 1:
                    // Prompt the user to enter a task description.
                    System.out.print("Enter task description: ");
                    // Read the task description from standard input.
                    task = scanner.nextLine();
                    // Call the addTask function to add the new task to the list.
                    list.addTask(task);
                    break;
                case 2:
                    // Call the printTasks function to print out the list of tasks.
                    list.printTasks();
                    break;
                case 3:
                    // Ask the user for the task number they want to remove.
                    System.out.print("Enter task number to remove: ");
                    // Read the task number from standard input.
                    taskNumber = scanner.nextInt();
                    scanner.nextLine(); // Consume the newline character.
                    // Call the removeTask function to remove the specified task.
                    // The task number provided by the user is decremented by 1 because the list array is zero-based indexed.
                    list.removeTask(taskNumber - 1);
                    break;
                case 0:
                    // Print a message and exit the loop, which will end the program.
                    System.out.println("Exiting...");
                    break;
                default:
                    // If the user's input doesn't match any case, notify them to try again.
                    System.out.println("Invalid choice, please try again.");
            }
        // Continue displaying the menu until the user chooses to exit (option 0).
        } while (choice != 0);

        // Close the scanner.
        scanner.close();
    }
}
