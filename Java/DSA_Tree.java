import java.util.ArrayList;
import java.util.List;

class TreeNode {
    int data;
    List<TreeNode> children;

    public TreeNode(int data) {
        this.data = data;
        this.children = new ArrayList<>();
    }

    public void addChild(TreeNode child) {
        this.children.add(child);
    }

    public static void main(String[] args) {
        
        TreeNode root = new TreeNode(1);
        TreeNode node2 = new TreeNode(2);
        TreeNode node3 = new TreeNode(3);
        TreeNode node4 = new TreeNode(4);
        TreeNode node5 = new TreeNode(5);

        
        root.addChild(node2);
        root.addChild(node3);
        node2.addChild(node4);
        node2.addChild(node5);

        
        printTree(root, 0);
    }

    
    public static void printTree(TreeNode node, int level) {
        
        for (int i = 0; i < level; i++) {
            System.out.print("\t");
        }
        System.out.println(node.data);

        
        for (TreeNode child : node.children) {
            printTree(child, level + 1);
        }
    }
}
