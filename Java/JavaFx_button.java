
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class JavaFx_button extends Application {

    @Override
    public void start(Stage primaryStage) {
        // Create a button with the text "Click Me!"
        Button button = new Button();
        button.setText("Click Me!");

        // Set an action for the button
        button.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                System.out.println("Button Clicked!"); // Print a message when the button is clicked
            }
        });

        // Create a layout and add the button to it
        StackPane root = new StackPane();
        root.getChildren().add(button);

        // Create a scene with the layout
        Scene scene = new Scene(root, 300, 250);

        // Set the scene to the stage
        primaryStage.setScene(scene);

        // Set the title of the stage
        primaryStage.setTitle("JavaFX Button Example");

        // Show the stage
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
