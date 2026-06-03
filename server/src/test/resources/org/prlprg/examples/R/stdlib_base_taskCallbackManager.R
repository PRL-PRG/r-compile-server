#? stdlib
`taskCallbackManager` <- function (handlers = list(), registered = FALSE, verbose = FALSE) 
{
    suspended <- FALSE
    .verbose <- verbose
    add <- function(f, data = NULL, name = NULL, register = TRUE) {
        if (is.null(name)) 
            name <- as.character(length(handlers) + 1L)
        handlers[[name]] <<- list(f = f)
        if (!missing(data)) 
            handlers[[name]][["data"]] <<- data
        if (!registered && register) {
            register()
        }
        name
    }
    remove <- function(which) {
        if (length(which) != 1L) 
            stop("'which' must be of length 1")
        if (is.character(which)) {
            tmp <- match(which, names(handlers))
            if (is.na(tmp)) 
                stop(gettextf("no such element '%s'", which), 
                  domain = NA)
            which <- tmp
        }
        else if (is.numeric(which)) {
            which <- as.integer(which)
            if (which <= 0 || which > length(handlers)) 
                stop("invalid 'which' argument")
        }
        else stop("'which' must be character or numeric")
        handlers <<- handlers[-which]
        return(TRUE)
    }
    evaluate <- function(expr, value, ok, visible) {
        if (suspended) 
            return(TRUE)
        discard <- character()
        for (i in names(handlers)) {
            h <- handlers[[i]]
            if (length(h) > 1L) {
                val <- h[["f"]](expr, value, ok, visible, h[["data"]])
            }
            else {
                val <- h[["f"]](expr, value, ok, visible)
            }
            if (!val) {
                discard <- c(discard, i)
            }
        }
        if (length(discard)) {
            if (.verbose) 
                cat(gettextf("Removing %s", paste(discard, collapse = ", ")), 
                  "\n")
            idx <- is.na(match(names(handlers), discard))
            if (length(idx)) 
                handlers <<- handlers[idx]
            else handlers <<- list()
        }
        return(TRUE)
    }
    suspend <- function(status = TRUE) {
        suspended <<- status
    }
    register <- function(name = "R-taskCallbackManager", verbose = .verbose) {
        if (verbose) 
            cat(gettext("Registering 'evaluate' as low-level callback\n"))
        id <- addTaskCallback(evaluate, name = name)
        registered <<- TRUE
        id
    }
    list(add = add, evaluate = evaluate, remove = remove, register = register, 
        suspend = suspend, callbacks = function() handlers)
}

# Examples
# create the manager
h <- taskCallbackManager()

# add a callback
h$add(function(expr, value, ok, visible) {
                       cat("In handler\n")
                       return(TRUE)
                     }, name = "simpleHandler")

# look at the internal callbacks.
getTaskCallbackNames()

# look at the R-level callbacks
names(h$callbacks())

removeTaskCallback("R-taskCallbackManager")

