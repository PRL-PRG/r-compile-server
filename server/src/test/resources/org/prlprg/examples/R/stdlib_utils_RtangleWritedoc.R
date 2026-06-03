#? stdlib
`RtangleWritedoc` <- function (object, chunk) 
{
    while (length(pos <- grep(object$syntax$docopt, chunk))) {
        opts <- sub(paste0(".*", object$syntax$docopt, ".*"), 
            "\\1", chunk[pos[1L]])
        object$options <- SweaveParseOptions(opts, object$options, 
            RweaveLatexOptions)
        chunk[pos[1L]] <- sub(object$syntax$docopt, "", chunk[pos[1L]])
    }
    object
}
