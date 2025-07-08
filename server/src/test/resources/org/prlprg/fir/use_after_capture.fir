fun main {
    ():v(I)f!-{ r:v(I)o! |
        r = [1, 2, 3];
        # error: `use`d after capture
        prom<Is!->{ return r[0]; };
        return use r;
    }
}
