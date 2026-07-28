#? stdlib
`blank_out_character_ranges` <- function (s, ranges) 
{
    for (r in ranges) {
        l1 <- r[1L]
        c1 <- r[2L]
        l2 <- r[3L]
        c2 <- r[4L]
        if (l1 == l2) {
            substring(s[l1], c1, c2) <- strrep(" ", c2 - c1 + 
                1L)
        }
        else {
            substring(s[l1], c1, nchar(s[l1])) <- ""
            for (i in seq(l1 + 1L, length.out = l2 - l1 - 1L)) s[i] <- ""
            substring(s[l2], 1L, c2) <- strrep(" ", c2)
        }
    }
    s
}
