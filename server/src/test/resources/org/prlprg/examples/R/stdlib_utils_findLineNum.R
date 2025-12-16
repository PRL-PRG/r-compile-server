#? stdlib
`findLineNum` <- function (srcfile, line, nameonly = TRUE, envir = parent.frame(), 
    lastenv) 
{
    count <- 0L
    result <- list()
    if (!inherits(srcfile, "srcfile")) {
        if (missing(line)) {
            line <- as.numeric(sub(".*#", "", srcfile))
            if (is.na(line)) 
                stop("Line number missing")
            srcfile <- sub("#[^#]*", "", srcfile)
        }
        srcfile <- srcfile(srcfile)
    }
    if (missing(lastenv)) 
        lastenv <- if (missing(envir)) 
            globalenv()
        else emptyenv()
    if (!is.environment(envir)) 
        envir <- environment(envir)
    fns <- character()
    envirs <- list()
    e <- envir
    repeat {
        fns <- c(fns, lsf.str(envir = e, all.names = TRUE))
        oldlen <- length(envirs)
        length(envirs) <- length(fns)
        if (length(envirs) > oldlen) 
            for (i in seq.int(oldlen + 1L, length(envirs))) envirs[[i]] <- e
        if (identical(e, lastenv) || identical(e, emptyenv())) 
            break
        e <- parent.env(e)
    }
    for (i in seq_along(fns)) {
        functionName <- fns[i]
        fn <- get(functionName, envir = envirs[[i]])
        loc <- fnLineNum(fn, srcfile = srcfile, line = line, 
            nameonly = nameonly)
        if (!is.null(loc)) {
            count <- count + 1L
            result[[count]] <- c(list(name = functionName, env = envirs[[i]]), 
                loc)
        }
        gen <- tryCatch(methods::isGeneric(functionName, envirs[[i]], 
            fdef = fn), error = identity)
        if (isTRUE(gen)) {
            e1 <- environment(fn)$.AllMTable
            for (sig in names(e1)) {
                fn <- e1[[sig]]
                if (typeof(fn) != "closure") 
                  next
                loc <- fnLineNum(fn, srcfile = srcfile, line = line, 
                  nameonly = nameonly)
                if (is.null(loc) && length(bf <- body(fn)) >= 
                  2L && length(bf[[2L]]) > 2L && typeof(bf.i <- bf[[iloc <- c(2L, 
                  3L)]]) == "closure") {
                  loc <- fnLineNum(bf.i, srcfile = srcfile, line = line, 
                    nameonly = nameonly)
                  if (!is.null(loc)) 
                    loc$at <- iloc
                }
                if (!is.null(loc)) {
                  count <- count + 1L
                  result[[count]] <- c(list(name = functionName, 
                    env = envirs[[i]], signature = strsplit(sig, 
                      "#")[[1L]]), loc)
                }
            }
        }
    }
    structure(result, class = "findLineNumResult")
}

# Examples


