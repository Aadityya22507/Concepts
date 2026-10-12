// stack

import java.util.*;

class Collections3 {
    public static void main(String arg[]) {
        Stack<Float> sobj = new Stack<Float>();

        sobj.push(10.5);
        sobj.push(20.5);
        sobj.push(30.5);
        sobj.push(40.5);

        float fret = sobj.pop();
        System.out.println(fret);

        fret = sobj.pop();
        System.out.println(fret);

    }
}