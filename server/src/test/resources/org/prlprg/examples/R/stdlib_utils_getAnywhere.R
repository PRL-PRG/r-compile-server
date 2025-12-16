#? stdlib
`getAnywhere` <- function (x) 
{
    if (tryCatch(!is.character(x), error = function(e) TRUE)) 
        x <- as.character(substitute(x))
    objs <- list()
    where <- character()
    visible <- logical()
    if (length(pos <- find(x, numeric = TRUE))) {
        objs <- lapply(pos, function(pos, x) get(x, pos = pos), 
            x = x)
        where <- names(pos)
        visible <- rep.int(TRUE, length(pos))
    }
    if (length(grep(".", x, fixed = TRUE))) {
        np <- length(parts <- strsplit(x, ".", fixed = TRUE)[[1L]])
        for (i in 2:np) {
            gen <- paste(parts[1L:(i - 1)], collapse = ".")
            cl <- paste(parts[i:np], collapse = ".")
            if (gen == "" || cl == "") 
                next
            Call <- substitute(getS3method(gen, cl, TRUE), list(gen = gen, 
                cl = cl))
            f <- eval.parent(Call)
            if (!is.null(f) && !is.null(environment(f))) {
                ev <- topenv(environment(f), baseenv())
                nmev <- if (isNamespace(ev)) 
                  getNamespaceName(ev)
                else NULL
                objs <- c(objs, list(f))
                msg <- paste("registered S3 method for", gen)
                if (!is.null(nmev)) 
                  msg <- paste(msg, "from namespace", nmev)
                where <- c(where, msg)
                visible <- c(visible, FALSE)
            }
        }
    }
    for (i in loadedNamespaces()) {
        ns <- asNamespace(i)
        if (exists(x, envir = ns, inherits = FALSE)) {
            f <- get(x, envir = ns, inherits = FALSE)
            objs <- c(objs, list(f))
            where <- c(where, paste0("namespace:", i))
            visible <- c(visible, FALSE)
        }
    }
    ln <- length(objs)
    dups <- rep.int(FALSE, ln)
    if (ln > 1L) 
        for (i in 2L:ln) for (j in 1L:(i - 1L)) if (identical(objs[[i]], 
            objs[[j]], ignore.environment = TRUE)) {
            dups[i] <- TRUE
            break
        }
    structure(list(name = x, objs = objs, where = where, visible = visible, 
        dups = dups), class = "getAnywhere")
}

# Examples
getAnywhere("format.dist")
getAnywhere("simpleLoess") # not exported from stats
argsAnywhere(format.dist)

