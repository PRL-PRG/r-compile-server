#? stdlib
`.makeTracedFunction` <- function (def, tracer, exit, at, print, doEdit) 
{
    switch(typeof(def), builtin = {
        fBody <- substitute({
            .prim <- DEF
            .prim(...)
        }, list(DEF = def))
        def <- eval(function(...) NULL)
        body(def, envir = .GlobalEnv) <- fBody
    }, special = {
        fBody <- substitute({
            do.call(DEF, list(...))
        }, list(DEF = def))
        def <- eval(function(...) NULL)
        body(def, envir = .GlobalEnv) <- fBody
        warning("making a traced version of a special; arguments may be altered")
    })
    if (!isFALSE(doEdit)) {
        if (is.character(doEdit) || is.function(doEdit)) {
            editor <- doEdit
            doEdit <- TRUE
        }
        else editor <- getOption("editor")
    }
    if (doEdit) {
        if (is(def, "traceable")) 
            def <- as(def, "function")
        if (is(editor, "character") && !is.na(match(editor, c("emacs", 
            "xemacs")))) {
            file <- tempfile("emacs")
            file <- sub("..$", ".R", file)
        }
        else file <- ""
        if (!(is.null(tracer) && is.null(exit) && length(at) == 
            0)) 
            def <- Recall(def, tracer, exit, at, print, FALSE)
        def2 <- utils::edit(def, editor = editor, file = file)
        if (!is.function(def2)) 
            stop(gettextf("the editing in trace() can only change the body of the function; got an object of class %s", 
                dQuote(class(def2))), domain = NA)
        if (!identical(args(def), args(def2))) 
            stop("the editing in trace() can only change the body of the function, not the arguments or defaults")
        fBody <- body(def2)
    }
    else {
        def <- .untracedFunction(def)
        fBody <- body(def)
        if (length(at) > 0) {
            if (is.null(tracer)) 
                stop("cannot use 'at' argument without a trace expression")
            else if (!inherits(fBody, "{")) 
                stop("cannot use 'at' argument unless the function body has the form '{ ... }'")
            for (i in at) {
                fBody[[i]] <- if (print) 
                  substitute({
                    .doTrace(TRACE, MSG)
                    EXPR
                  }, list(TRACE = tracer, MSG = paste("step", 
                    paste(i, collapse = ",")), EXPR = fBody[[i]]))
                else substitute({
                  .doTrace(TRACE)
                  EXPR
                }, list(TRACE = tracer, EXPR = fBody[[i]]))
            }
        }
        else if (!is.null(tracer)) {
            fBody <- if (print) 
                substitute({
                  .doTrace(TRACE, MSG)
                  EXPR
                }, list(TRACE = tracer, MSG = paste("on entry"), 
                  EXPR = fBody))
            else substitute({
                .doTrace(TRACE)
                EXPR
            }, list(TRACE = tracer, EXPR = fBody))
        }
        if (!is.null(exit)) {
            exit <- if (print) 
                substitute(.doTrace(EXPR, MSG), list(EXPR = exit, 
                  MSG = paste("on exit")))
            else substitute(.doTrace(EXPR), list(EXPR = exit))
            fBody <- substitute({
                on.exit(TRACE)
                BODY
            }, list(TRACE = exit, BODY = fBody))
        }
    }
    body(def, envir = environment(def)) <- fBody
    def
}
