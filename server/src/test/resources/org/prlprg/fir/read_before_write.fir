fun main {
    () --> I { reg r:I |
        # error: Read before write: r
        return r;
    }
}
