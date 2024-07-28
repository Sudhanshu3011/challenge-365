
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.CheckBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class CheckBoxExample extends Application {

//    @Override
    public void start(Stage primaryStage) {
        // Create a CheckBox
        CheckBox checkBox = new CheckBox("Accept Terms and Conditions");

        // Handle CheckBox events
        checkBox.setOnAction(event -> {
            if (checkBox.isSelected()) {
                System.out.println("Checkbox is selected");
            } else {
                System.out.println("Checkbox is not selected");
            }
        });

        // Create a layout and add the CheckBox to it
        VBox vbox = new VBox(checkBox);
        vbox.setSpacing(10);

        // Create a scene with the layout
        Scene scene = new Scene(vbox, 300, 200);

        // Set up the stage
        primaryStage.setTitle("JavaFX Checkbox Example");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}

