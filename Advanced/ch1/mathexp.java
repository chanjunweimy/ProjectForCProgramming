/*
 * Given valid mathematical expression involving operators, evaluate that expression
 */

import java.util.Scanner;
import javax.script.*;

class Main {
    public static void main(String[] args) throws Exception {
        ScriptEngineManager mgr = new ScriptEngineManager();
        ScriptEngine engine = mgr.getEngineByName("JavaScript");
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine())
            System.out.println(engine.eval(sc.nextLine()));
    }
}

