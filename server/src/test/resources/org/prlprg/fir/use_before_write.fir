fun main {
    () --> v(I)f { reg r:v(I)o |
        # error: Use before write: r
        return use r;
    }
}
