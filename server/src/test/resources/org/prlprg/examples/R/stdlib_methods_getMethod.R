#? stdlib
`getMethod` <- function (f, signature = character(), where = topenv(parent.frame()), 
    optional = FALSE, mlist, fdef) 
{
    if (!missing(where)) {
        env <- .NamespaceOrEnvironment(where)
        if (is.null(env)) 
            stop(gettextf("no environment or package corresponding to argument where=%s", 
                deparse(where)), domain = NA)
        where <- env
    }
    if (missing(fdef)) {
        if (missing(where)) 
            fdef <- getGeneric(f, FALSE)
        else {
            fdef <- getGeneric(f, FALSE, where = where)
            if (is.null(fdef)) 
                fdef <- getGeneric(f, FALSE)
        }
    }
    if (!is(fdef, "genericFunction")) {
        if (optional) 
            return(NULL)
        if (!is.character(f)) 
            f <- deparse1(substitute(f))
        stop(gettextf("no generic function found for '%s'", f), 
            domain = NA)
    }
    if (missing(mlist)) 
        mlist <- if (missing(where)) 
            getMethodsForDispatch(fdef)
        else .getMethodsTableMetaData(fdef, where, optional)
    if (is.environment(mlist)) {
        signature <- matchSignature(signature, fdef)
        value <- .findMethodInTable(signature, mlist, fdef)
        if (is.null(value) && !optional) {
            if (!is.character(f)) 
                f <- deparse1(substitute(f))
            stop(gettextf("no method found for function '%s' and signature %s", 
                f, paste(signature, collapse = ", ")))
        }
        return(value)
    }
    else if (is.null(mlist)) 
        return(mlist)
    stop("defunct methods list search", domain = NA)
}

# Examples
testFun <-  function(x)x
setGeneric("testFun")
setMethod("testFun", "numeric", function(x)x+1)

hasMethod("testFun", "numeric") # TRUE

hasMethod("testFun", "integer") #TRUE, inherited

existsMethod("testFun", "integer") #FALSE

hasMethod("testFun") # TRUE, default method

hasMethod("testFun", "ANY")


## Verify the example
stopifnot(isGeneric("testFun"),
          hasMethod("testFun", "numeric"),
          hasMethod("testFun", "integer"),
          !existsMethod("testFun", "integer"),
          hasMethod("testFun"),
          hasMethod("testFun", "ANY") )
removeGeneric("testFun")


