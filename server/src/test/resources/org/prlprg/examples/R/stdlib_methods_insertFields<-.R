#? stdlib
`insertFields<-` <- function (fieldList, value) 
{
    newNames <- names(value)
    hasFields <- match(newNames, names(fieldList), 0) > 0
    if (any(hasFields)) {
        for (field in newNames[hasFields]) if (is.na(match(fieldList[[field]], 
            c(extends(value[[field]]), "ANY")))) 
            stop(gettextf("the overriding class (\"%s\") of field %s is not a subclass of the existing field definition (\"%s\")", 
                value[[field]], sQuote(field), fieldList[[field]]), 
                domain = NA)
    }
    fieldList[newNames] <- value
    fieldList
}
