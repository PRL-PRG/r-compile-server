#? stdlib
`.TraceWithMethods` <- function (what, tracer = NULL, exit = NULL, at = numeric(), print = TRUE, 
    signature = NULL, where = .GlobalEnv, edit = FALSE, from = NULL, 
    untrace = FALSE, classMethod = FALSE) 
{
    fromPackage <- if (is.function(where)) {
        where <- if (is(where, "genericFunction")) 
            parent.env(environment(where))
        else environment(where)
        getPackageName(where)
    }
    else ""
    doEdit <- !isFALSE(edit)
    whereF <- NULL
    pname <- character()
    def <- NULL
    tracingWhere <- "in package"
    refCase <- isS4(where) && (is(where, "envRefClass") || is(where, 
        "refClassRepresentation"))
    if (refCase) {
        if (!is.null(signature)) 
            stop("argument 'signature' is not meaningful for tracing reference methods")
        .where <- where
        if (is(.where, "refGeneratorSlot") && !classMethod) 
            .where <- .where$def
        if (is(.where, "refClassRepresentation")) {
            pname <- .where@className
            .where <- .where@refMethods
            tracingWhere <- "for class"
        }
        else {
            tracingWhere <- "for object from class"
            pname <- class(.where)
        }
        def <- eval(substitute(.dollarForEnvRefClass(.where, 
            what)))
        if (!is(def, "refMethodDef")) {
            thisName <- substitute(what)
            stop(gettextf("%s is not a method for reference class %s", 
                sQuote(as.character(if (is.symbol(thisName)) thisName else what)), 
                dQuote(class(where))), domain = NA)
        }
        what <- def@name
        whereF <- .where
    }
    else if (is.function(what)) {
        def <- what
        if (is(def, "genericFunction")) {
            what <- def@generic
            whereF <- .genEnv(what, where)
            pname <- def@package
        }
        else {
            fname <- substitute(what)
            if (is.name(fname)) {
                what <- as.character(fname)
                temp <- .findFunEnvAndName(what, where)
                whereF <- temp$whereF
                pname <- temp$pname
            }
            else if (is.call(fname) && identical(fname[[1L]], 
                as.name("::"))) {
                whereF <- as.character(fname[[2L]])
                require(whereF, character.only = TRUE)
                whereF <- as.environment(paste0("package:", whereF))
                pname <- fname[[2L]]
                what <- as.character(fname[[3L]])
            }
            else if (is.call(fname) && identical(fname[[1L]], 
                as.name(":::"))) {
                pname <- paste(fname[[2L]], "(not-exported)")
                whereF <- loadNamespace(as.character(fname[[2L]]))
                what <- as.character(fname[[3L]])
            }
            else stop("argument 'what' should be the name of a function")
        }
    }
    else {
        what <- as(what, "character")
        if (length(what) != 1) {
            for (f in what) {
                if (nargs() == 1) 
                  trace(f)
                else Recall(f, tracer, exit, at, print, signature, 
                  where, edit, from, untrace)
            }
            return(what)
        }
        temp <- .findFunEnvAndName(what, where, signature)
        whereF <- temp$whereF
        pname <- temp$pname
        fname <- what
    }
    if (what %in% .InvalidTracedFunctions) 
        stop(gettextf("tracing the internal function %s is not allowed", 
            sQuote(what)), domain = NA)
    if (.traceTraceState) {
        message(".TraceWithMethods: after computing what, whereF", 
            domain = NA)
        browser()
    }
    if (nargs() == 1) 
        return(if (untrace) .primUntrace(what) else .primTrace(what))
    if (is.null(whereF)) {
        allWhere <- findFunction(what, where = where)
        if (length(allWhere) == 0) 
            stop(gettextf("no function definition for %s found", 
                sQuote(what)), domain = NA)
        whereF <- as.environment(allWhere[[1L]])
    }
    if (is.null(tracer) && is.null(exit) && isFALSE(edit)) 
        tracer <- quote({
        })
    if (is.null(def)) 
        def <- getFunction(what, where = whereF)
    if (is(def, "traceable") && isFALSE(edit) && !untrace) 
        def <- .untracedFunction(def)
    if (!is.null(signature)) {
        fdef <- if (!is(def, "genericFunction")) 
            getGeneric(as.character(fname), TRUE, where)
        else def
        def <- selectMethod(what, signature, fdef = fdef, optional = TRUE)
        if (isRematched(def)) {
            expr <- substitute(trace(.local, tracer = tr, at = at, 
                exit = ex, print = pr, edit = ed, where = sys.frame(sys.nframe())), 
                list(tr = substitute(tracer), ex = exit, at = at, 
                  pr = print, ed = edit))
            at <- 3L
            tracer <- expr
            print <- FALSE
        }
        if (is.null(def)) {
            warning(gettextf("cannot untrace method for %s; no method defined for this signature: %s", 
                sQuote(what), paste(signature, collapse = ", ")), 
                domain = NA)
            return(def)
        }
        signature <- def@target
    }
    if (untrace) {
        if (.traceTraceState) {
            message(".TraceWithMethods: untrace case", domain = NA)
            browser()
        }
        if (is.null(signature)) {
            if (is(def, "traceable")) {
                newFun <- .untracedFunction(def)
            }
            else {
                .primUntrace(what)
                return(what)
            }
        }
        else {
            if (is(def, "traceable")) 
                newFun <- .untracedFunction(def)
            else {
                warning(gettextf("the method for %s for this signature was not being traced", 
                  sQuote(what)), domain = NA)
                return(what)
            }
        }
    }
    else {
        if (!is.null(exit)) {
            if (is.function(exit)) {
                tname <- substitute(exit)
                if (is.name(tname)) 
                  exit <- tname
                exit <- substitute(TRACE(), list(TRACE = exit))
            }
        }
        if (!is.null(tracer)) {
            if (is.function(tracer)) {
                tname <- substitute(tracer)
                if (is.name(tname)) 
                  tracer <- tname
                tracer <- substitute(TRACE(), list(TRACE = tracer))
            }
        }
        original <- .untracedFunction(def)
        traceClass <- .traceClassName(class(original))
        if (is.null(getClassDef(traceClass))) {
            traceClass <- .makeTraceClass(traceClass, class(original))
        }
        if (doEdit && is.environment(edit)) {
            def <- .findNewDefForTrace(what, signature, edit, 
                fromPackage)
            environment(def) <- environment(original)
            if (is.null(c(tracer, exit))) {
                newFun <- new(traceClass, original)
                newFun@.Data <- def
            }
            else {
                newFun <- new(traceClass, def = def, tracer = tracer, 
                  exit = exit, at = at, print = print, doEdit = FALSE)
                newFun@original <- original
            }
            newFun@source <- edit
        }
        else newFun <- new(traceClass, def = if (doEdit) 
            def
        else original, tracer = tracer, exit = exit, at = at, 
            print = print, doEdit = edit)
    }
    global <- identical(whereF, .GlobalEnv)
    if (.traceTraceState) {
        message(".TraceWithMethods: about to assign or setMethod", 
            domain = NA)
        browser()
    }
    if (is.null(signature)) {
        if (bindingIsLocked(what, whereF)) 
            .assignOverBinding(what, newFun, whereF, global)
        else assign(what, newFun, whereF)
        if (length(pname) != 0) {
            spname <- sub("^namespace:", "", pname)
            ipkgs <- tryCatch(getNamespaceUsers(spname), error = function(e) {
                c()
            })
            for (importingPkg in ipkgs) {
                .updateInImportsEnv(what, newFun, importingPkg)
            }
        }
        if (length(grep("[^.]+[.][^.]+", what)) > 0) {
            S3MTableName <- ".__S3MethodsTable__."
            if (!is.null(tbl <- get0(S3MTableName, envir = whereF, 
                inherits = FALSE))) {
                if (exists(what, envir = tbl, inherits = FALSE)) {
                  tracedFun <- get(what, envir = whereF, inherits = TRUE)
                  assign(what, tracedFun, envir = tbl)
                }
            }
        }
    }
    else {
        if (untrace && is(newFun, "MethodDefinition") && !identical(newFun@target, 
            newFun@defined)) 
            newFun <- NULL
        setMethod(fdef, signature, newFun, where = new.env())
    }
    if (!global) {
        action <- if (untrace) 
            "Untracing"
        else "Tracing"
        nameSpaceCase <- FALSE
        location <- if (.identC(fromPackage, "")) {
            if (length(pname) == 0 && !is.null(whereF)) 
                pname <- getPackageName(whereF)
            nameSpaceCase <- isNamespace(whereF) && !is.na(match(pname, 
                loadedNamespaces())) && identical(whereF, getNamespace(pname))
            if (length(pname) == 0) 
                ""
            else {
                if (nameSpaceCase) 
                  paste0(" in environment <namespace:", pname, 
                    ">")
                else paste0(" ", tracingWhere, " \"", pname, 
                  "\"")
            }
        }
        else paste0(" as seen from package \"", fromPackage, 
            "\"")
        object <- if (refCase) 
            "reference method"
        else if (is.null(signature)) 
            "function"
        else "specified method for function"
        object <- paste0(" ", object, " \"", what, "\" ")
        .message(action, object, location)
        if (nameSpaceCase && !untrace && is.null(signature) && 
            exists(what, envir = .GlobalEnv)) {
            untcall <- paste0("untrace(\"", what, "\", where = getNamespace(\"", 
                pname, "\"))")
            .message("Warning: Tracing only in the namespace; to untrace you will need:\n    ", 
                untcall, "\n")
        }
    }
    what
}
