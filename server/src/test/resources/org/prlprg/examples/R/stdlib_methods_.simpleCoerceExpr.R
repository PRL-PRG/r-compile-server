#? stdlib
`.simpleCoerceExpr` <- function (fromClass, toClass, fromSlots, toDef) 
{
    toSlots <- names(toDef@slots)
    sameSlots <- (length(fromSlots) == length(toSlots) && !anyNA(match(fromSlots, 
        toSlots)))
    if (is.null(packageSlot(toClass))) {
        toClass <- toDef@className
        if (is.null(packageSlot(toClass))) 
            packageSlot(toClass) <- toDef@package
    }
    chClass <- as.character(toClass)
    if (sameSlots) 
        substitute({
            class(from) <- CLASS
            from
        }, list(CLASS = toClass))
    else if (length(toSlots) == 0L) {
        if (is.na(match(chClass, .BasicClasses))) 
            substitute({
                attributes(from) <- NULL
                class(from) <- CLASS
                from
            }, list(CLASS = toClass))
        else if (isVirtualClass(toDef)) 
            quote(from)
        else {
            switch(chClass, matrix = , array = {
                quote({
                  .dm <- dim(from)
                  .dn <- dimnames(from)
                  attributes(from) <- NULL
                  dim(from) <- .dm
                  dimnames(from) <- .dn
                  from
                })
            }, ts = {
                quote({
                  .tsp <- tsp(from)
                  attributes(from) <- NULL
                  tsp(from) <- .tsp
                  class(from) <- "ts"
                  from
                })
            }, quote({
                attributes(from) <- NULL
                from
            }))
        }
    }
    else {
        substitute({
            value <- methods::new(CLASS)
            for (what in TOSLOTS) methods::slot(value, what) <- methods::slot(from, 
                what)
            value
        }, list(CLASS = chClass, TOSLOTS = toSlots))
    }
}
