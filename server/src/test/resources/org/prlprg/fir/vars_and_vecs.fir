fun f {
    (rx:Is!, ry:p(Is!-)s!, rz:v(I)s!){ x:Is?, y:Is?, z:Is?, return:v(I)o!;
        x = rx;
        y = force ry;
        z = rz[0];
        return = [x as Is!, y as Is!, z as Is!];
        return[rz[1]] = 4;
        use return
    }:v(I)f!-
}