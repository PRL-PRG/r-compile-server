fun main {
    (){ r:v(I)o!;
        r = [1, 2, 3];
        # error: `use`d after capture
        prom<Is!->{ r[0] };
        use r
    }:v(I)f!-
}