#? stdlib
`.gregexec_at_pos` <- function (pattern, x, m, pos) 
{
    unlist(lapply(regmatches(x, m), function(e) do.call(rbind, 
        regmatches(e, regexec(pattern, e)))[, pos]), use.names = FALSE)
}
