#? stdlib
`variable.names.lm` <- function (object, full = FALSE, ...) 
{
    if (full) 
        dimnames(qr.lm(object)$qr)[[2L]]
    else if (object$rank) 
        dimnames(qr.lm(object)$qr)[[2L]][seq_len(object$rank)]
    else character()
}
