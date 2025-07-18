fun main {
    () --> v(I)f { reg r:v(I)o |
        # error: read before write
        return use r;
    }
}
