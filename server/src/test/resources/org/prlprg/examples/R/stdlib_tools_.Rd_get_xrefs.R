#? stdlib
`.Rd_get_xrefs` <- function (x) 
{
    out <- matrix(character(), nrow = 0L, ncol = 2L)
    recurse <- function(e) {
        tag <- attr(e, "Rd_tag")
        if (identical(tag, "\\link")) {
            val <- if (length(e)) {
                arg <- as.character(e[[1L]])
                opt <- attr(e, "Rd_option")
                c(arg, if (is.null(opt)) "" else as.character(opt))
            }
            else c("", "")
            out <<- rbind(out, val)
        }
        else if (identical(tag, "\\linkS4class")) {
            arg <- as.character(e[[1L]])
            val <- c(arg, sprintf("=%s-class", arg))
            out <<- rbind(out, val)
        }
        if (is.list(e)) 
            lapply(e, recurse)
    }
    lapply(x, recurse)
    dimnames(out) <- list(NULL, c("Target", "Anchor"))
    out
}
