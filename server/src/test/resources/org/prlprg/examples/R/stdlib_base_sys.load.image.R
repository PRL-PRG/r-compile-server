#? stdlib
`sys.load.image` <- function (name, quiet) 
{
    if (file.exists(name)) {
        load(name, envir = .GlobalEnv)
        sample.kind <- .Internal(RNGkind(NULL, NULL, NULL))[3L]
        if (sample.kind == 0L) 
            warning("non-uniform 'Rounding' sampler used", domain = NA)
        if (!quiet) 
            message("[Previously saved workspace restored]", 
                "\n")
    }
}
