fun main {
    ():Is!-{ r:v(I)o! |
        r = [1, 2, 3];
        # error: accessed after `use`
        use r;
        r[0]
    }
}