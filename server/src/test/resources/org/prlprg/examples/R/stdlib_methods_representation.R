#? stdlib
`representation` <- function (...) 
{
    value <- list(...)
    anames <- allNames(value)
    for (i in seq_along(value)) {
        ei <- value[[i]]
        if (!is.character(ei) || length(ei) != 1L) 
            stop(gettextf("element %d of the representation was not a single character string", 
                i), domain = NA)
    }
    includes <- as.character(value[!nzchar(anames)])
    if (anyDuplicated(includes)) 
        stop(gettextf("duplicate class names among superclasses: %s", 
            paste(.dQ(includes[duplicated(includes)]), collapse = ", ")), 
            domain = NA)
    slots <- anames[nzchar(anames)]
    if (anyDuplicated(slots)) {
        dslots <- slots[duplicated(slots)]
        stop(sprintf(ngettext(length(dslots), "duplicated slot name: %s", 
            "duplicated slot names: %s"), paste(sQuote(dslots), 
            collapse = "")), domain = NA)
    }
    value
}

# Examples
## representation for a new class with a directly define slot "smooth"
## which should be a "numeric" object, and extending class "track"
representation("track", smooth ="numeric")

prev <- getClassDef("class3")
setClass("class1", representation(a="numeric", b = "character"))
setClass("class2", representation(a2 = "numeric", b = "numeric"))
try(setClass("class3", representation("class1", "class2")))
{if(is.null(prev))
  stopifnot(!isClass("class3"))
else
  stopifnot(identical(getClassDef("class3"), prev))}


###  >>> This *is* old syntax -- use 'contains=*, slots=*' instead <<<
###                ==========         ----------  ------   ======



setClass("Character",representation("character"))
setClass("TypedCharacter",representation("Character",type="character"),
          prototype(character(0),type="plain"))
ttt <- new("TypedCharacter", "foo", type = "character")

stopifnot(identical(as(ttt, "character"), "foo"))


setClass("num1", representation(comment = "character"),
         contains = "numeric",
         prototype = prototype(pi, comment = "Start with pi"))


stopifnot(identical(new("num1"), new("num1", pi, comment = "Start with pi")))
for(cl in c("num1", "TypedCharacter", "Character", "class2", "class1"))
    removeClass(cl)



