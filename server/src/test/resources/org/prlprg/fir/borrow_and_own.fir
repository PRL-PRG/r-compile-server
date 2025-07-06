fun main {
    (r1:v(I)o!, r2:v(I)b!):v(I)f!-{ rx:v(I)o!, ry:v(I)o! |
        rx = use r1;
        ry = dup r2;
        rx[0] = 1;
        ry[2] = 3;
        use ry
    }
}
