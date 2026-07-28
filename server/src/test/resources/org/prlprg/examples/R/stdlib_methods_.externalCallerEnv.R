#? stdlib
`.externalCallerEnv` <- function (n = 2, nmax = sys.nframe() - n + 1) 
{
    if (nmax < 1) 
        stop("got a negative maximum number of frames to look at")
    ev <- topenv(parent.frame())
    for (back in seq.int(from = -n, length.out = nmax)) {
        fun <- sys.function(back)
        if (is.function(fun)) {
            ev <- environment(fun)
            if (!identical(ev, .methodsNamespace)) 
                break
        }
    }
    ev
}
