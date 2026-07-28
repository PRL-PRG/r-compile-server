#? stdlib
`findMethods` <- function (f, where, classes = character(), inherited = FALSE, 
    package = "") 
{
    if (is(f, "genericFunction")) {
        fdef <- f
        f <- fdef@generic
    }
    else if (.isSingleString(f)) {
        if (missing(where)) 
            fdef <- getGeneric(f, package = package)
        else {
            fdef <- getGeneric(f, where = where, package = package)
            if (is.null(fdef)) 
                fdef <- getGeneric(f, package = package)
        }
    }
    else if (!is.function(f)) 
        stop(gettextf("argument %s must be a generic function or a single character string; got an object of class %s", 
            sQuote("f"), dQuote(class(f))), domain = NA)
    else {
        fdef <- f
        f <- deparse1(substitute(f))
    }
    if (!is(fdef, "genericFunction")) {
        warning(gettextf("non-generic function '%s' given to findMethods()", 
            f), domain = NA)
        return(list())
    }
    object <- new("listOfMethods", arguments = fdef@signature, 
        generic = fdef)
    if (missing(where)) 
        table <- get(if (inherited) 
            ".AllMTable"
        else ".MTable", envir = environment(fdef))
    else {
        if (!isFALSE(inherited)) 
            stop(gettextf("only FALSE is meaningful for 'inherited', when 'where' is supplied (got %s)", 
                inherited), domain = NA)
        where <- as.environment(where)
        what <- .TableMetaName(f, fdef@package)
        if (is.null(table <- where[[what]])) 
            return(object)
    }
    objNames <- sort(names(table))
    if (length(classes)) {
        classesPattern <- paste0("#", classes, "#", collapse = "|")
        which <- grep(classesPattern, paste0("#", objNames, "#"))
        objNames <- objNames[which]
    }
    object@.Data <- mget(objNames, table)
    object@names <- objNames
    object@signatures <- strsplit(objNames, "#", fixed = TRUE)
    object
}

# Examples
mm <-  findMethods("Ops")
findMethodSignatures(methods = mm)

