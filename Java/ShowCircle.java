import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.Pane;
import javafx.scene.shapes.Circle;
import javafx.paint.Color;
import javafx.stage.Stage;

public class ShowCircle extends Application  {
    
    public void start(Stage primaryStage)
    {
        Circle circle= new Circle();
        circle.setCenterX(100);
        circle.setCentreY(100);
        circle.setRadius(50);

        circle.setStroke(Color.BLACK);
        circle.fill(Color.WHITE);

        Pane pane =new pane();
        pane.getChildern().add(circle);

        Scene scene =new Scene(pane,200,250);
        primaryStage.setTitle("Circle")
        primaryStage.setScence(scene);
        primaryStage.show();

        
    }
}
