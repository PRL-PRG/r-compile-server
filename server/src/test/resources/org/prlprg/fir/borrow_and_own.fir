fun main {
    (reg r1:v(I)o, reg r2:v(I)b) --> v(I)f { reg rx:v(I)o, reg ry:v(I)o |
        rx = use r1;
        ry = dup r2;
        rx[0] = 1;
        ry[2] = 3;
        return use ry;
    }
}
