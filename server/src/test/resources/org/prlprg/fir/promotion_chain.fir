fun main {
    () --> v(I) { var x:I?, var y:I?, reg r:v(I)o |
        return force prom<v(I) ->{
            x = force prom<I ->{ return 10; };
            y = force prom<I ->{ return 20; };
            r = [x as I, y as I];
            return use r;
        };
    }
}
