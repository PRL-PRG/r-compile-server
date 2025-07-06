fun main {
    (){ x:Is?, y:Is?, r:v(I)o!;
        force prom<v(I)s!->{
            x = force prom<Is!->{ 10 };
            y = force prom<Is!->{ 20 };
            r = [x as Is!, y as Is!];
            use r
        }
    }:v(I)s!-
}
