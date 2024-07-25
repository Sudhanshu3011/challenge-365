import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.stage.Stage;

public class ButtonDemo extends Application {
--------
    @Override
    public void start(Stage primaryStage) {
        Button button = new Button("OK");
        Scene scene = new Scene(button, 200, 250);
        primaryStage.setTitle("Button JAVAFx");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        Application.launch(args);
    }

}
