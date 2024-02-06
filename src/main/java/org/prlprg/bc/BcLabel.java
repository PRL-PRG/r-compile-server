package org.prlprg.bc;

public class BcLabel {
    private final int id;
    private int loc = -1;

    public BcLabel(int id) {
        this.id = id;
    }

    public int id() {
        return id;
    }

    public int loc() {
        return loc;
    }

    public void setLoc(int loc) {
        this.loc = loc;
    }

    @Override
    public String toString() {
        return "L" + id + "(" + loc + ")";
    }
}
