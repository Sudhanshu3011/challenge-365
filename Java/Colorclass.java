import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.Pane;
import javafx.scene.shapes.Circle;
import javafx.paint.Color;
import javafx.text.*;
import javafx.stage.Stage;

public class Colorclass extends Application {

    public void start(Stage primaryStage) {

        circle circle = new circle();

        Color color = new color(0.6, 0.4, 0.3, 0.2);
        color.brighter();

        color.lighter();

        Label label = new Label("JavaFx");
        label.setFont(Font.font("Times New Roman", FontWeight.BOLD, FontPosture.ITALIC, 20));
        
        
    }

}
