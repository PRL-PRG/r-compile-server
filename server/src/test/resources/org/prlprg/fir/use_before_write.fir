fun main {
    () --> v(I)f { reg r:v(I)o |
        # type-error: Use before write: r
        return use r;
    }
}
