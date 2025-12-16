#? stdlib
`isSealedMethod` <- function (f, signature, fdef = getGeneric(f, FALSE, where = where), 
    where = topenv(parent.frame())) 
{
    fGen <- getFunction(f, TRUE, FALSE, where = where)
    if (!is.primitive(fGen)) {
        mdef <- getMethod(f, signature, optional = TRUE, where = where, 
            fdef = fGen)
        return(is(mdef, "SealedMethodDefinition"))
    }
    if (is(fdef, "genericFunction")) 
        signature <- matchSignature(signature, fdef)
    if (length(signature) == 0L) 
        TRUE
    else if (f %in% .subsetFuns) 
        !anyNA(match(signature, .BasicClasses))
    else {
        sealed <- !is.na(match(signature[[1L]], .BasicClasses))
        if (sealed && (!is.na(match("Ops", c(f, getGroup(f, TRUE)))) || 
            !is.na(match(f, c("%*%", "crossprod", "tcrossprod"))))) 
            sealed <- sealed && (length(signature) > 1L) && !is.na(match(signature[[2L]], 
                .BasicClasses))
        sealed
    }
}

# Examples
## these are both TRUE
isSealedMethod("+", c("numeric", "character"))
isSealedClass("matrix")

setClass("track", slots = c(x="numeric", y="numeric"))
## but this is FALSE
isSealedClass("track")
## and so is this
isSealedClass("A Name for an undefined Class")
## and so are these, because only one of the two arguments is basic
isSealedMethod("+", c("track", "numeric"))
isSealedMethod("+", c("numeric", "track"))


removeClass("track")


