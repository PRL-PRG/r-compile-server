#? stdlib
`relist` <- function (flesh, skeleton = attr(flesh, "skeleton")) 
{
    if (is.null(skeleton)) {
        stop("The 'flesh' argument does not contain a skeleton attribute.\n", 
            "Either ensure you unlist a relistable object, or specify the skeleton separately.")
    }
    UseMethod("relist", skeleton)
}

# Examples
 ipar <- list(mean = c(0, 1), vcov = cbind(c(1, 1), c(1, 0)))
 initial.param <- as.relistable(ipar)
 ul <- unlist(initial.param)
 relist(ul)
 stopifnot(identical(relist(ul), initial.param))

