#? stdlib
`blank_out_regexp_matches` <- function (s, re, ...) 
{
    m <- gregexpr(re, s, ...)
    regmatches(s, m) <- Map(function(n) strrep(" ", n), lapply(regmatches(s, 
        m), nchar))
    s
}
