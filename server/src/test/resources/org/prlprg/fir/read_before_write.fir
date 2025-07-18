fun main {
    () --> I { reg r:I |
        # error: read before write
        return r;
    }
}
