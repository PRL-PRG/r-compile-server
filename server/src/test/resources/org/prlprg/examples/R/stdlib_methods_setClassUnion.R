#? stdlib
`setClassUnion` <- function (name, members = character(), where = topenv(parent.frame())) 
{
    if (length(members) > 0) {
        membersDefined <- sapply(members, isClass, where = as.environment(where))
        if (!all(membersDefined)) 
            stop(gettextf("the member classes must be defined: not true of %s", 
                paste(.dQ(as(members[!membersDefined], "character")), 
                  collapse = ", ")), domain = NA)
    }
    def <- new("ClassUnionRepresentation", makeClassRepresentation(name, 
        package = getPackageName(where), where = where))
    prev <- getClassDef(name, where = where)
    value <- setClass(name, def, where = where)
    failed <- character()
    hasNull <- match("NULL", members, 0L)
    if (hasNull) 
        members <- c("NULL", members[-hasNull])
    for (what in members) {
        ext <- def@subclasses[[what]]
        if (is(try(setIs(what, name, where = where, extensionObject = ext)), 
            "try-error")) {
            if (!is.character(what)) 
                what <- getClass(what, TRUE, where)@className
            failed <- c(failed, what)
        }
    }
    if (length(failed) > 0) {
        if (is.null(prev)) 
            try(removeClass(name, where = where))
        else try(setClass(name, prev, where = where))
        stop(gettextf("unable to create union class:  could not set members %s", 
            paste(.dQ(failed), collapse = ", ")), domain = NA)
    }
    invisible(value)
}

# Examples
## a class for either numeric or logical data
setClassUnion("maybeNumber", c("numeric", "logical"))

## use the union as the data part of another class
setClass("withId", contains = "maybeNumber", slots = c(id = "character"))

w1 <- new("withId", 1:10, id = "test 1")
w2 <- new("withId", sqrt(w1)%%1 < .01, id = "Perfect squares")

## add class "complex" to the union "maybeNumber"
setIs("complex", "maybeNumber")

w3 <- new("withId", complex(real = 1:10, imaginary = sqrt(1:10)))

## a class union containing the existing class  union "OptionalFunction"
setClassUnion("maybeCode",
    c("expression", "language", "OptionalFunction"))

is(quote(sqrt(1:10)), "maybeCode")  ## TRUE

## The following test is less trivial than it looks.
## It depends on the assignment of the data part NOT performing a
## strict coerce to "numeric" on the way to satisfying
## is(ttt, "maybeNumber").
stopifnot(identical(w1@.Data, 1:10))
removeClass("withId")
removeClass("maybeNumber")



