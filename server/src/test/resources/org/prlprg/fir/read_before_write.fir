fun main {
    () --> I { reg r:I |
        # type-error: Read before write: r
        return r;
    }
}
