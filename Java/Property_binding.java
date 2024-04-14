import JavaFx.application.Application;
import JavaFx.scene.Scene;
import JavaFx.scene.Pane;
import JavaFx.scene.shapes.Circle;
import JavaFx.paint.Color;
import JavaFx.stage.Stage;

//using the property binding
public class Property_binding extends Application{

    public void start(Stage primaryStage)
    {
        Pane pane =new pane();

        Circle circle = new circle();
        circle.centerXProperty().bind(pane.widthXProperty().divide(2));
        circle.centerYProperty().bind(pane.widthYProperty().divide(2));
        circle.setradius(50);
        circle.setStroke(Color.BLACK);
        circle.fill(Color.WHITE);

        pane.getChildern().add(circle);

        Scene scene = new scene(pane,200,250);
        primaryStage.setTitle("Binding Property");
        primaryStage.setScene(scene);
        primaryStage.show();


    }
    
}
