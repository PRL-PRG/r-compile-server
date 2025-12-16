#? stdlib
`.gsub_with_transformed_matches` <- function (pattern, replacement, x, trafo, count, ...) 
{
    replace <- function(yi) {
        do.call(sprintf, c(list(replacement), Map(function(tr, 
            co) fsub("\\", "\\\\", tr(yi[co])), trafo, count + 
            1L)))
    }
    if (!is.list(trafo)) 
        trafo <- list(trafo)
    m <- gregexpr(pattern, x, ...)
    v <- lapply(regmatches(x, m), function(e) {
        y <- regmatches(e, regexec(pattern, e, ...))
        unlist(Map(function(ei, yi) {
            sub(pattern, replace(yi), ei, ...)
        }, e, y))
    })
    regmatches(x, m) <- v
    x
}
