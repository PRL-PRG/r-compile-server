#? stdlib
`setAs` <- function (from, to, def, replace = NULL, where = topenv(parent.frame())) 
{
    fromDef <- getClassDef(from, where)
    toDef <- getClassDef(to, where)
    extds <- possibleExtends(from, to, fromDef, toDef)
    if (is(extds, "SClassExtension")) {
        test <- extds@test
        if (is.null(replace)) 
            replace <- extds@replace
        test <- NULL
        setIs(from, to, test = test, coerce = def, replace = replace, 
            where = where)
    }
    else if (isTRUE(extds)) {
        if (.identC(from, to)) 
            stop(gettextf("trying to set an 'as' relation from %s to itself", 
                dQuote(.class1(from))), domain = NA)
        if (is.null(toDef)) 
            stop(gettextf("class %s is not defined in this environment", 
                dQuote(to)), domain = NA)
        if (isClassUnion(toDef)) 
            stop(gettextf("class %s is a class union: 'coerce' relations to a class union are not meaningful", 
                dQuote(to)), domain = NA)
        setIs(from, to, coerce = def, replace = replace, where = where)
    }
    args <- formalArgs(def)
    if (!is.na(match("strict", args))) 
        args <- args[-match("strict", args)]
    if (length(args) == 1) 
        def <- substituteFunctionArgs(def, "from", functionName = "coerce")
    else if (length(args) != 2 || !identical(args, c("from", 
        "to"))) 
        stop(gettextf("'as' method should have one argument, or match the arguments of coerce(): got  (%s)", 
            paste(formalArgs(def), collapse = ", ")), domain = NA)
    method <- as.list(coerce@.Data)
    method$to <- to
    method <- as.function(method)
    body(method, envir = environment(def)) <- body(def)
    setMethod("coerce", c(from, to), method, where = where)
    if (!is.null(replace)) {
        args <- formalArgs(replace)
        if (identical(args, c("from", "to", "value"))) 
            method <- replace
        else {
            if (length(args) != 2) 
                stop(gettextf("a 'replace' method definition in 'setAs' must be a function of two arguments, got %d", 
                  length(args)), domain = NA)
            replace <- body(replace)
            if (!identical(args, c("from", "value"))) {
                ll <- list(quote(from), quote(value))
                names(ll) <- args
                replace <- substituteDirect(replace, ll)
                warning(gettextf("argument names in 'replace' changed to agree with 'coerce<-' generic:\n%s", 
                  paste(deparse(replace), sep = "\n    ")), domain = NA)
            }
            method <- eval(function(from, to, value) NULL)
            body(method, envir = .GlobalEnv) <- replace
        }
        setMethod("coerce<-", c(from, to), method, where = where)
    }
}

# Examples
## using the definition of class "track" from \link{setClass}


setClass("track", slots = c(x="numeric", y="numeric"))
setClass("trackCurve", contains = "track", slots = c(smooth = "numeric"))


setAs("track", "numeric", function(from) from@y)

t1 <- new("track", x=1:20, y=(1:20)^2)

as(t1, "numeric")

## The next example shows:
##  1. A virtual class to define setAs for several classes at once.
##  2. as() using inherited information

setClass("ca", slots = c(a = "character", id = "numeric"))

setClass("cb", slots = c(b = "character", id = "numeric"))

setClass("id")
setIs("ca", "id")
setIs("cb", "id")


setAs("id", "numeric", function(from) from@id)

CA <- new("ca", a = "A", id = 1)
CB <- new("cb", b = "B", id = 2)

setAs("cb", "ca", function(from, to )new(to, a=from@b, id = from@id))

as(CB, "numeric")


## should generate an error (should have been a function of one argument)
try(setAs("track", "numeric", function(x, y,z)x@y))


