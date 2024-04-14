import application.Application;
import JavaFx.scene.Scene;
import JavaFx.scene.control.Button;
import JavaFx.scene.layout.StackPane;
import JavaFx.stage.Stage;

public class ButtoninPane extends Application {
    
    public void start(Stage primaryStage)
    {
        Button button= new button("OK");
        StackPane pane =new StackPane();
        pane.getChildern().add(button);
        Scene scene = new Scene(pane, 200 ,250);
        primaryStage.Title("Button in pane");
        primaryStage.setScene(scene);
        primaryStage.show(); 

    }
}
