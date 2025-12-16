#? stdlib
`blank_out_ignores_in_lines` <- function (lines, ignore) 
{
    args <- list()
    if (is.list(ignore)) {
        args <- ignore[-1L]
        ignore <- ignore[[1L]]
    }
    for (re in ignore[nzchar(ignore)]) lines <- do.call(blank_out_regexp_matches, 
        c(list(lines, re), args))
    lines
}
