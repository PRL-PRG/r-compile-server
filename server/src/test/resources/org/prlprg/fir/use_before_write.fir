fun main {
    () --> v(I)f { reg r:v(I)o |
        # type-error: Use before write: r
        # cfg-error: Local register r is never assigned
        return use r;
    }
}
