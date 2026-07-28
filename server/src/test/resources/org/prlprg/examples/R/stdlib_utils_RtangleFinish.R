#? stdlib
`RtangleFinish` <- function (object, error = FALSE) 
{
    if (!is.null(object$output) && object$output >= 3) 
        close(object$output)
    if (length(object$chunkout)) 
        for (con in object$chunkout) close(con)
}
