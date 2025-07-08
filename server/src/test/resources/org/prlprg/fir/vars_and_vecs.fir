fun f {
    (rx:Is!, ry:p(Is!-)s!, rz:v(I)s!):v(I)f!-{ x:Is?, y:Is?, z:Is?, ret:v(I)o! |
        x = rx;
        y = force ry;
        z = rz[0];
        ret = [x as Is!, y as Is!, z as Is!];
        ret[rz[1]] = 4;
        return use ret;
    }
}
