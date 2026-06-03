#? stdlib
`.copyMethodDefaults` <- function (generic, method) 
{
    emptyDefault <- function(value) missing(value) || (is.name(value) && 
        nzchar(as.character(value)))
    fg <- formals(generic)
    mg <- formals(method)
    emptyDef <- vapply(mg, emptyDefault, logical(1L))
    mg <- mg[!emptyDef]
    i <- match(names(fg), names(mg))
    formals(generic)[!is.na(i)] <- mg[i[!is.na(i)]]
    generic
}
