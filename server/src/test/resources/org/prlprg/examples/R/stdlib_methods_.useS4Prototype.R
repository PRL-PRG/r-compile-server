#? stdlib
`.useS4Prototype` <- function (on = TRUE, where = .methodsNamespace) 
{
    if (on) 
        pp <- .Call(C_Rf_allocS4Object)
    else pp <- list()
    .assignOverBinding(".defaultPrototype", where = where, pp, 
        FALSE)
}
