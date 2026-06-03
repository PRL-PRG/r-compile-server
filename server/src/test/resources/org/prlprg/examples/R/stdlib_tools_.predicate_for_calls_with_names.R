#? stdlib
`.predicate_for_calls_with_names` <- function (nms) 
{
    function(e) {
        (is.call(e) && ((is.name(x <- e[[1L]]) && as.character(x) %in% 
            nms)) || ((is.call(x <- e[[1L]]) && is.name(x[[1L]]) && 
            (as.character(x[[1L]]) %in% c("::", ":::")) && as.character(x[[3L]]) %in% 
            nms)))
    }
}
