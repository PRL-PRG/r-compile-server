fun main {
    () --> I { reg r:v(I)o |
        r = [1, 2, 3];
        # error: accessed after `use`
        use r;
        return r[0];
    }
}