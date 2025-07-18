fun f {
    (reg rx:I, reg ry:p(I -), reg rz:v(I)) --> v(I)f { var x:I?, var y:I?, var z:I?, reg ret:v(I)o |
        x = rx;
        y = force ry;
        z = rz[0];
        ret = [x as I, y as I, z as I];
        ret[rz[1]] = 4;
        return use ret;
    }
}
