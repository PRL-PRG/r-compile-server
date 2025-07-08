fun main {
    # error: stupid cast (one must be a subtype): casting `v(I)f!` to `Is!`
    ():Is!-{ |
        return [1, 2, 3] as Is!;
    }
}
